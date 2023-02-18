#include "./include/Insert_Sort.h"
#include <stdlib.h>
#include <time.h>

int main() {
  int Arr[MAX_Length] = {};
  srand((unsigned int)time(NULL));
  for (int i = 0; i < MAX_Length; i++)
    Arr[i] = rand() % 100 + 1;

  printf("原数组：");
  for (int i = 0; i < MAX_Length; i++)
    printf("%3d", Arr[i]);
  printf("\n");

  Insert_Sort(Arr, MAX_Length);

  printf("插入排序后数组：");
  for (int i = 0; i < MAX_Length; i++)
    printf("%3d", Arr[i]);
  printf("\n");

  return 0;
}
