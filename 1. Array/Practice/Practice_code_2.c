#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int m = 5, i;
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    int temp;
    for (i = 0; i < m; i++)
    {
        printf("%d\n", arr[i]);
    }
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}