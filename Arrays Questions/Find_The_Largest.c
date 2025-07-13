#include <stdio.h>
#define Size 100

int main()
{

    int arr[Size];
    int i;
    int n;
    int max;

    printf("Enter your size of array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Elements of the array : ");
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("The Max is : %d", max);
    return 0;
}
