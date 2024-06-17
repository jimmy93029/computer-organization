#include "CacheManager.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

CacheManager::CacheManager(Memory *memory, Cache *cache) {
    // TODO: implement your constructor here
    // TODO: set tag_bits according to your design.
    // Hint: you can access cache size by cache->get_size();
    // Hint: you need to call cache->set_block_size();

    this->memory = memory;
    this->cache = cache;
    ways = 2;
    cache->set_block_size(4);

    len = cache->get_len();
    tag_bits = 32 - log2(len) - 2;
    counter.resize(len, 0); // Resize counter for the correct number of cache lines
}

CacheManager::~CacheManager() {
    cache = nullptr;
    memory = nullptr;
}

std::pair<unsigned, unsigned> CacheManager::directed_map(unsigned int addr) {
    // map addr by n-way associative
    unsigned int index_bit = static_cast<unsigned int>(log2(len / ways));
    unsigned int index = (addr >> 2) % (len / ways); 
    unsigned int tag = addr >> (index_bit + 2); // Correct bit shifting for tag

    return {index, tag};
}

unsigned int* CacheManager::find(unsigned int addr) {
    // TODO: implement function to determine if addr is in cache or not
    // if addr is in cache, return target pointer, otherwise return nullptr.
    // you shouldn't access memory in this function.

    unsigned int pos = findAddr(addr);
    if (pos != -1)
    {
        return &((*cache)[pos][0]);
    }

    return nullptr;
}

unsigned int CacheManager::read(unsigned int addr) {
    // TODO: implement replacement policy and return value

    unsigned int pos = findAddr(addr);
    if (pos != -1) 
    {
        if (counter[pos] < INT_MAX) {
            counter[pos]++;
        }
        return (*cache)[pos][0];
    } 
    else {
        // not in cache
        int pos = replace(addr, memory->read(addr));
        return (*cache)[pos][0];
    }
    return 0; // Default return if not found
}

void CacheManager::write(unsigned int addr, unsigned value) {
    // TODO: write value to addr

    unsigned int pos = findAddr(addr);
    if (pos != -1) {

        // n way
        if (counter[pos] < INT_MAX) {
            counter[pos]++;
        }
        (*cache)[pos][0] = value;
    } 
    else {
        // not in cache
        replace(addr, value);
    }

    memory->write(addr, value);
}

int CacheManager::replace(unsigned int addr, unsigned value) {
    auto [index, tag] = directed_map(addr);

    // LRU
    unsigned int pos = index * ways;
    for (unsigned int i = index * ways; i < index * ways + ways; i++) {
        if (counter[i] < counter[pos])
            pos = i;
    }

    counter[pos] = 1;
    (*cache)[pos].tag = tag;
    (*cache)[pos][0] = value;

    return pos;
}


int CacheManager::findAddr(unsigned int addr)
{
    auto [index, tag] = directed_map(addr);

    // n way
    for (unsigned int i = index * ways; i < index * ways + ways; i++) 
    {
        if ((*cache)[i].tag == tag) {
            return i;
        }
    }
    return -1;
}