#include <stdio.h>
#define size 1000

int count_even_and_odd(int arr[], int n);

int main()
{
    int arr[size];
    int i;
    int n;

    printf("Enter your array size : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter your array elements : ");
        scanf("%d", &arr[i]);
    }

    count_even_and_odd(arr, n);

    return 0;
}

int count_even_and_odd(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d is the even\n", arr[i]);
        else
            printf("%d is odd\n", arr[i]);
    }
    return 0;
}