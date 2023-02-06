#include <stdio.h>

int main() {
  int arr[10], i, sum = 0;
  float avg;
  printf("Enter 10 elements of the array: \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 10; i++) {
    sum = sum + arr[i];
  }
  avg = (float) sum / 10;
  printf("Average of elements stored in the array: %.2f\n", avg);
  return 0;
}
