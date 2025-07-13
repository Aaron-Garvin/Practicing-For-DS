#include <stdio.h>
#define Size 100

int main()
{

    int arr[Size];
    int i;
    int n;
    int min;

    printf("Enter your size of array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Elements of the array : ");
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("The Min is : %d", min);
    return 0;
}