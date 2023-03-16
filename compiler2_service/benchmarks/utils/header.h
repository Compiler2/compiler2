/*
Copyright (c) 2019, Ameer Haj Ali (UC Berkeley), and Intel Corporation
All rights reserved.
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#include <stdbool.h>
// #include <stdio.h>
#include <sys/time.h>   
#include <stdarg.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>


static int rand_nums[] = {100,100,45,90,4,70,5,73,50,7,83,95,35,78,54,51,21,21,59,43,1,37,57,0,83,88,80,93,76,7,54,54,48,10,74,88,18,87,69,12,89,97,40,78,57,97,60,4,35,27,36,62,76,94,23,58,97,0,10,24,92,71,48,54,10,2,84,74,58,76,43,17,88,65,4,23,28,15,14,40,5,91,33,33,58,51,66,64,16,7,57,37,38,7,16,83,61,39,23,3,96,92,4,44,83,36,78,1,28,65,32,91,9,54,42,17,92,9,85,40,3,62,72,75,77,71,35,35,51,64,51,24,43,14,41,87,76,53,54,72,5,87,40,55,42,12,14,44,1,62,61,91,64,67,48,7,47,79,38,60,24,54,80,17,39,0,76,72,5,96,46,12,16,44,5,69,10,70,38,53,9,8,78,65,3,97,55,53,91,16,48,66,2,26,20,72,62,20,44,25,19,33,27,47,86,36,83,20,68,47,47,35,45,48,88,6,96,75,40,33,27,21,39,28,57,52,64,50,78,43,6,43,25,45,51,61,39,3,1,57,93,51,75,28,58,40,12,27,42,30,82,87,13,16,31,41,74,78,66,12,73,37,84,22,19,75,91,5,67,54,32,31,58,75,44,98,51,55,46,53,37,77,3,40,89,34,98,45,80,97,13,23,81,41,41,33,40,9,14,14,49,51,26,91,10,60,87,8,85,98,54,24,43,33,85,6,7,23,92,77,60,81,70,38,64,3,48,1,32,27,35,33,96,53,13,76,58,48,76,42,40,58,48,76,16,31,72,58,47,40,75,54,78,32,95,7,36,87,32,51,16,66,81,74,35,90,8,61,25,68,85,68,20,54,40,66,77,2,39,83,95,71,5,96,15,53,49,95,56,11,54,49,52,87,14,34,22,45,67,5,0,89,47,34,85,39,4,50,20,92,22,64,67,54,63,4,69,20,15,76,67,83,81,34,22,55,73,59,82,2,96,63,46,23,95,68,88,54,71,96,6,78,87,54,30,46,19,20,71,89,97,58,86,51,73,23,9,12,6,63,73,9,80,24,85,94,91,72,23,30,2,97,57,33,12,8,36,82,21,95,69,0,78,27,90,13,44,44,79,35,58,31,46,1,40,17,29,74,46,77,62,75,76,19,4,54,66,48,64,10,55,48,45,98,63,59,35,60,80,94,95,76,30,84,64,17,36,47,46,89,38,30,75,79,53,0,73,52,98,66,81,39,8,50,75,57,37,91,90,43,95,60,35,4,51,71,51,78,86,76,82,18,84,32,64,36,40,15,16,20,72,60,18,84,2,60,17,78,1,97,26,7,16,63,47,65,81,6,10,38,20,25,34,98,66,38,5,78,48,43,37,75,66,56,41,45,89,93,41,85,0,84,58,28,30,19,88,35,28,92,77,95,72,81,34,87,84,40,59,12,28,98,13,75,41,67,63,71,91,11,38,92,93,71,1,30,7,52,85,6,43,32,38,17,56,48,29,5,61,38,31,17,22,34,64,97,12,52,96,7,64,97,61,62,93,41,44,97,93,95,97,80,41,53,5,29,61,1,0,70,0,9,77,24,40,98,30,18,18,17,30,95,86,49,84,27,1,84,74,11,81,41,24,23,34,48,31,44,42,34,58,61,52,83,75,63,83,19,2,21,51,27,41,33,17,58,1,28,90,88,8,40,20,31,6,38,69,34,6,87,83,25,73,40,59,27,28,76,73,83,72,76,70,41,25,68,42,79,60,45,99,39,50,21,43,54,73,75,15,93,83,44,35,32,65,68,62,62,21,96,76,55,85,98,21,18,7,18,31,23,43,17,56,97,51,56,9,9,14,23,69,8,16,77,7,26,55,82,79,75,69,17,64,59,43,95,64,53,57,36,69,23,55,59,75,85,73,37,97,33,49,65,74,99,6,61,71,62,19,10,80,77,24,59,39,78,86,13,46,57,64,93,59,89,48,38,64,6,28,57,53,9,48,98,97,24,37,37,27,76,82,25,95,97,95,17,57,5,21,51,91,88,99,0,35,2,17,28,9,22,57,51,14,27,47,49,80,28,20,75,6,34,70,81,52,86,51,5,25,29,82,63,36,6,52,31,70,12,50,86,61,90,41,41,34,34,64,89,97,22,97,52,14,38,87,66,63,46,52,89,31,25,91,22,12,72,65,1,94,15,4,34,84,10,80,25,31,48,52,40,72,72,4,42,31,51,52,87,87,12,24,91,50,98,59,83,90,4,51,78,18,69,28,7,3,3,17,45,90,56,20,41,74,27,76,41,30,23,};
static int rand_nums_len = sizeof(rand_nums) / sizeof(int);


// /**
//  * Warmup and then measure.
//  *
//  * Adapted from Neurovectorizer's implementation:
//  * https://github.com/intel/neuro-vectorizer/blob/d1b068998c08865c59f1586845bb947229f70a51/training_data/header.h
//  *
//  * Which was in turn adapted from LLVM:
//  * https://github.com/llvm/llvm-test-suite/blob/7eca159e29ca4308256ef6e35560a2d884ac6b01/SingleSource/UnitTests/Vectorizer/gcc-loops.cpp#L330-L336
//  */
// #define BENCH(NAME, RUN_LINE, ITER, DIGEST_LINE) \
//   {                                              \
//     struct timeval Start, End;                   \
//     RUN_LINE;                                    \
//     gettimeofday(&Start, 0);                     \
//     for (int i = 0; i < (ITER); ++i) RUN_LINE;   \
//     gettimeofday(&End, 0);                       \
//     unsigned r = DIGEST_LINE;                    \
//     long mtime, s, us;                           \
//     s = End.tv_sec - Start.tv_sec;               \
//     us = End.tv_usec - Start.tv_usec;            \
//     mtime = (s * 1000 + us / 1000.0) + 0.5;      \
//     printf("%ld", mtime);                        \
//   }

// #include <stdio.h>  


/********* Overload print/scan for better measurement ************/ 
inline int printf(const char *restrict text, ...) {
  return 0;
}


// static int seed = 0;
static int scanf_num = 0;
static inline void set_rand() {
    scanf_num = 0;
}


inline int scanf(const char *restrict text, ...) {
    char types[10];
    int n = 0;
    for (int i = 0; text[i] != '\0'; i++){
        if (text[i] == '%'){
            types[n++] = text[i+1];
        }
    }

    va_list ptr;

    va_start(ptr, text);


    for (int i = 0; i < n; i++) {
        printf("scanf_num = %d, i = %d\n", scanf_num, i);
        // Accessing current variable and pointing to next
        if (types[i] == 'd'){
            // printf("Rand int = %d %d\n\n", scanf_num, rand_nums[scanf_num]);
            *va_arg(ptr, int*) = rand_nums[scanf_num];

        } else if (types[i] == 's'){
            char *s = va_arg(ptr, char*);
            *s++ = (char) (rand_nums[scanf_num]); scanf_num = (scanf_num + 1) % rand_nums_len;
            *s++ = (char) (rand_nums[scanf_num]); scanf_num = (scanf_num + 1) % rand_nums_len;
            *s++ = (char) (rand_nums[scanf_num]); 
            *s = (char) (0); 

        } else {
            // printf("Rand char = %d %d\n\n", scanf_num, rand_nums[scanf_num]);
            *va_arg(ptr, char*) = (char) (rand_nums[scanf_num]);
        }
        scanf_num = (scanf_num + 1) % rand_nums_len;

    }

    va_end(ptr);
    return 0;
}

inline int getchar(){
    char ch = (char) (rand_nums[scanf_num]);
    scanf_num = (scanf_num + 1) % rand_nums_len;
    return ch;
}


int main_bench();

int main(){
    long mtime, s, us;
    struct timeval Start, End; 

    gettimeofday(&Start, 0);
    do{
        set_rand();
        main_bench();
        gettimeofday(&End, 0);
        s = End.tv_sec - Start.tv_sec;
        us = End.tv_usec - Start.tv_usec;
        mtime = (s * 1000 + us / 1000.0) + 0.5;
    }while (mtime < 1);
    
}