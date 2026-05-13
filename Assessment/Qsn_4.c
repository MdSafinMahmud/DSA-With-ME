#include <stdio.h>
int main()
{
    int arr[] = {12, 20, 22, 21, 29, 23, 19};
    int n = 7;
    for (int i = 0; i < n - 1; i++)
    {
        printf("Pass %d: ", i + 1);
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
    printf("\nFinal Sorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}