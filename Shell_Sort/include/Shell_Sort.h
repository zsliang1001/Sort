#ifndef _SHELL_SORT_H_
#define _SHELL_SORT_H_
#define Max_Length 10
#define SWAP(a, b)                                                             \
  {                                                                            \
    int tmp;                                                                   \
    tmp = a;                                                                   \
    a = b;                                                                     \
    b = tmp;                                                                   \
  }
#include <stdio.h>

#endif

void Shell_Sort(int[], int);