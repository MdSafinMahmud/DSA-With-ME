#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, k = 4, new = 23;
    int i;
    printf("Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]=%d\n", i, arr[i]);
    }
    arr[k-1] = new;
    printf("After Updation:\n");
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]=%d\n", i, arr[i]);
    }
    return 0;
}