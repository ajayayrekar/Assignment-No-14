#include <stdio.h>

int main() {
  int arr[10], i, sum = 0;
  printf("Enter 10 elements of the array: \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 10; i++) {
    sum = sum + arr[i];
  }
  printf("Sum of elements stored in the array: %d\n", sum);
  return 0;
}
