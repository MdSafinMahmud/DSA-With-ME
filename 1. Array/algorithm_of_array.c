#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int insert = 10, k = 3, n = 8;
    int i = 0, j = n - 1;
    printf("The original array emplements is:\n");
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]=%d\n", i, arr[i]);
    }
    n++;
    for (j; j >= k; j--)
        arr[j + 1] = arr[j];
    arr[k] = insert;
    printf("The array elements after the insertion: \n");
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]=%d\n", i, arr[i]);
    }
    return 0;
}

// This code follow this algorithm
// 1. Start
// 2. Set J = N
// 3. Set N = N + 1
// 4. Repeat steps 5 and 6 while J >= K
// 5. Set arr[J + 1] = arr[J]
// 6. Set J = J - 1
// 7. Set arr[K] = ITEM
// 8. Stop