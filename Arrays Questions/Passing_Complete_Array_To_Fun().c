#include <stdio.h>
#define size 1000

int pass_array_to_function(int arr[], int);

int main()
{
    int arr[size], n, i;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter your array elements : ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Printing array : ");
    pass_array_to_function(arr, n);

    return 0;
}

int pass_array_to_function(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
