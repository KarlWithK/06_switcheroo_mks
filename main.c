#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int arr[10], i;
  for (i = 0; i < 9; i++) {
    arr[i] = rand();
  }
  arr[9] = 0;
  for (i = 0; i < 10; i++) {
    printf("Index: %d with num: %d\n", i, arr[i]);
  }
  int copy[10];
  int *cap = copy;
  int *arrp = arr + 9;
  printf("Reverse Array\n");
  for (i = 0; i < 10; i++) {
    *cap = *arrp;
    printf("index: %d with num: %d\n", i, *cap);
    cap++;
    arrp--;
  }

  return 0;
}
