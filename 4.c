#include <stdio.h>

int main() {
  int arr[10], i, max = 0;
  printf("Enter 10 elements of the array: \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  max = arr[0];
  for (i = 1; i < 10; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  printf("Greatest number stored in the array: %d\n", max);
  return 0;
}
