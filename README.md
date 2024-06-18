# CSCS10014: Computer Organization Class Lab Homework

## Supplement
resources : [61c](https://cs61c.org/sp24/), 
[computer organization and design](http://home.ustc.edu.cn/~louwenqi/reference_books_tools/Computer%20Organization%20and%20Design%20RISC-V%20edition.pdf)

## Lab 0: Full Adder and ALU
The code is not thoroughly checked.

## Lab 1, 2: Single Cycle CPU
The implementation of RISC-V Single Cycle CPU refers to the following structures:

![Single Cycle CPU Structure 1](images/image-1.png)
![Single Cycle CPU Structure 2](images/image-2.png)

## Lab 3, 4: Pipeline CPU
The following picture is drawn by my friend 廖毅臻
![Pipeline CPU Structure](images/image-3.png)

## Lab 5: Cache
Reaching the best performance with a 3-way 8-block length. Please refer to `CacheManager.cpp`.

## Notes

### Note 1: Using gtkwave Command
```bash
# You may need it when using VSCode
export GTK_PATH
gtkwave waveform.vcd
```
### Note2 : using TEST_INSTRUCTIONS.txt
we need to ensure the last line of txt is blank
