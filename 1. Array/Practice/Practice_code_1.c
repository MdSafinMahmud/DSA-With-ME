#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int i;
    int max = arr[0];
    int min = arr[0];
    int m = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]=%d\n", i, arr[i]);
    }
    for (i = 1; i < m; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Largest Amount in this ARRAY:%d\n", max);
    printf("Smallest Amount in this ARRAY:%d\n", min);

    return 0;
}