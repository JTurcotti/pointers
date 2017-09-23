#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int arr[10];
  srand(time(NULL));

  printf("The original array:\n");
  
  int k = -1;
  while (++k < 10) {
    arr[k] = (k == 9)? 0: rand();
    printf("arr[%i]: %i\n", k, arr[k]);
  }

  int brr[10];
  int* pa = arr + 9;
  
  printf("The second array:\n");
  k = -1;
    
  while (++k < 10) {
    brr[k] = *pa--;
    printf("arr[%i]: %i\n", k, brr[k]);
  }
}
  
