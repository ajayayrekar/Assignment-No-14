#include <stdio.h>

int main()
{
    int i, n, arr[10];
    int max1 = 0, max2 = 0;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    printf("The second largest number in the array is: %d\n", max2);

    return 0;
}
