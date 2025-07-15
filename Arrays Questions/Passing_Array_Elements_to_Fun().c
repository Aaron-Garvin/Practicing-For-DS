#include <stdio.h>
#define size 1000

int pass_array_elements(int);

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

    printf("Passing elements of array to function : ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", pass_array_elements(arr[i]));
    }

    return 0;
}

int pass_array_elements(int a)
{
    return a;
}
