#include <stdio.h>
#define size 100

int main()
{
    int arr[size];
    int i;
    int n;
    int sum = 0;

    printf("Enter The size of Array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the elements of array : ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The sum of all elemets are : %d", sum);

    return 0;
}