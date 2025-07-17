#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the number of blocks :");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value on %dth position of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %dth position of this array is %d \n", i, ptr[i]);
    }
    printf("Enter the new number of blocks :");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value on %dth position of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value at %dth position of this array is %d \n", i, ptr[i]);
    }
    

    free(ptr);
    //use to free the space in the ptr
    return 0;
}