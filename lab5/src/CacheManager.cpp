#include "CacheManager.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <tuple>
#include <climits>


CacheManager::CacheManager(Memory *memory, Cache *cache) 
{
    // TODO: implement your constructor here
    // TODO: set tag_bits according to your design.
    // Hint: you can access cache size by cache->get_size();
    // Hint: you need to call cache->set_block_size();

    this->memory = memory;
    this->cache = cache;
    ways = 3;
    block_len = 8;

    cache->set_block_size(4 * block_len);
    cache_len = cache->get_len();
    counter.resize(cache_len, 0); // Resize counter for the correct number of cache lines
}


CacheManager::~CacheManager() 
{
    cache = nullptr;
    memory = nullptr;
}


std::tuple<unsigned, unsigned, unsigned> CacheManager::directed_map(unsigned int addr) 
{
    // map addr by n-way associative
    unsigned int index_bit = static_cast<unsigned int>(log2(cache_len / ways));
    unsigned int offset_bit = static_cast<unsigned int>(log2(block_len));

    unsigned int offset = (addr >> 2) %  block_len;
    unsigned int index = (addr >> offset_bit >> 2) % (cache_len / ways); 
    unsigned int tag = addr >> index_bit >> offset_bit >> 2; 

    return {tag, index, offset};
}

unsigned int* CacheManager::find(unsigned int addr) 
{
    // TODO: implement function to determine if addr is in cache or not
    // if addr is in cache, return target pointer, otherwise return nullptr.
    // you shouldn't access memory in this function.

    auto [tag, pos, offset] = findAddr(addr);
    if (pos != -1)
    {
        return &((*cache)[pos][offset]);
    }

    return nullptr;
}

unsigned int CacheManager::read(unsigned int addr) {
    // TODO: implement replacement policy and return value

    auto [tag, pos, offset] = findAddr(addr);
    if (pos != -1) 
    {
        if (counter[pos] < INT_MAX) {
            counter[pos]++;
        }
        return (*cache)[pos][offset];
    } 
    else {
        // not in cache
        pos = LRU(addr);

        counter[pos] = 1;
        (*cache)[pos].tag = tag;
        blockReplace(addr, pos);

        return (*cache)[pos][offset];
    }
}

void CacheManager::write(unsigned int addr, unsigned value) {
    // TODO: write value to addr

    auto [tag, pos, offset] = findAddr(addr);
    if (pos != -1) {

        if (counter[pos] < INT_MAX) {
            counter[pos]++;
        }

        (*cache)[pos][offset] = value;
    } 
    else {
        // not in cache
        pos = LRU(addr);

        counter[pos] = 1;
        (*cache)[pos].tag = tag;
        blockReplace(addr, pos);

        (*cache)[pos][offset] = value;
    }

    memory->write(addr, value);
}

int CacheManager::LRU(unsigned int addr) 
{
    auto [tag, index, offset] = directed_map(addr);

    // LRU
    unsigned int pos = index * ways;
    for (unsigned int i = index * ways; i < index * ways + ways; i++) {
        if (counter[i] < counter[pos])
            pos = i;
    }

    return pos;
}


std::tuple<unsigned, long long, unsigned> CacheManager::findAddr(unsigned int addr)
{
    auto [tag, index, offset] = directed_map(addr);

    // n way
    for (long long i = index * ways; i < index * ways + ways; i++) 
    {
        if ((*cache)[i].tag == tag) {
            return {tag, i, offset};
        }
    }
    return {tag, -1, offset};
}


void CacheManager::blockReplace(unsigned int addr, int pos)
{
    unsigned int offset_bit = static_cast<unsigned int>(log2(block_len));
    unsigned int not_offset = addr >> offset_bit >> 2;

    // replace all blocks at (*cache)[pos]
    for (int i = 0; i < block_len; i++)
    {
        addr = (not_offset << offset_bit << 2) + (i << 2);
        (*cache)[pos][i] = memory->read(addr);
    }
}
