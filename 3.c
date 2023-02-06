#include <stdio.h>

int main() {
  int arr[10], i, even_sum = 0, odd_sum = 0;
  printf("Enter 10 elements of the array: \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 10; i++) {
    if (arr[i] % 2 == 0) {
      even_sum = even_sum + arr[i];
    } else {
      odd_sum = odd_sum + arr[i];
    }
  }
  printf("Sum of all even numbers: %d\n", even_sum);
  printf("Sum of all odd numbers: %d\n", odd_sum);
  return 0;
}
