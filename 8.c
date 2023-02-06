#include <stdio.h>

int main() {
  int n, i;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int first = arr[0], second = arr[1];
  if (second < first) {
    first = arr[1];
    second = arr[0];
  }
  for (i = 2; i < n; i++) {
    if (arr[i] < first) {
      second = first;
      first = arr[i];
    } else if (arr[i] < second && arr[i] != first) {
      second = arr[i];
    }
  }
  printf("The second smallest number is: %d\n", second);
  return 0;
}
