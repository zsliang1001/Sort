#include "./../include/Shell_Sort.h"

void Shell_Sort(int *Arr, int length) {
  int gap = 1;
  while (gap < length / 3)
    gap = length / 3 + 1;
  for (; gap > 0; gap /= 3)
    for (int i = 0; i < gap; i++)
      for (int j = i + gap; j < length; j += gap)
        for (int k = j - gap; k >= 0 && Arr[k] > Arr[k + gap]; k -= gap)
          SWAP(Arr[k], Arr[k + gap])
}