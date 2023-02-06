#include <stdio.h>

int main()
{
    int i, n, arr[10];
    int min = 999999;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("The smallest number in the array is: %d\n", min);

    return 0;
}
