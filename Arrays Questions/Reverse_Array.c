#include <stdio.h>
#define size 100

int main()
{
    int arr[size];
    int i;
    int n;

    printf("Enter your array size : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter array elements : ");
        scanf("%d", &arr[i]);
    }

    for (i = --n; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}