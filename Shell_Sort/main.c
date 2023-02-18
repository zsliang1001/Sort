#include "./include/Shell_Sort.h"
#include <stdlib.h>
#include <time.h>

int main() {
  int Arr[Max_Length] = {0};
  srand((unsigned int)time(NULL));

  for (int i = 0; i < Max_Length; i++)
    Arr[i] = rand() % 100 + 1;

  printf("原数组：");
  for (int i = 0; i < Max_Length; i++)
    printf("%3d", Arr[i]);
  printf("\n");

  Shell_Sort(Arr, Max_Length);

  printf("希尔排序后的数组：");
  for (int i = 0; i < Max_Length; i++)
    printf("%3d", Arr[i]);
  printf("\n");

  return 0;
}