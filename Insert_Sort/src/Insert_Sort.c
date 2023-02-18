#include "./../include/Insert_Sort.h"

void Insert_Sort(int *Arr, int Length) {
  int j, key;
  for (int i = 1; i < Length; i++) {
    key = Arr[i];
    for (j = i - 1; j >= 0 && Arr[j] > key; j--)
      Arr[j + 1] = Arr[j];
    Arr[j + 1] = key;
  }
}