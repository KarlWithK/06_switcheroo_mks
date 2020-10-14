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
    printf("%d\n", arr[i]);
  }

  int copy[10];
  int *cap = copy;
  int *arrp = arr + 9;
  for (i = 0; i < 10; i++) {
    *cap = *arrp;
    printf("%d\n", *cap);
    cap++;
    arrp--;
  }

  return 0;
}
