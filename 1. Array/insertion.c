#include <stdio.h>
#define MAX 5
int main()
{
    int arr[MAX] = {2, 3, 4, 5};
    int N = 4;
    int value = 1;
    int i;
    printf("Array Before insertion:\n");
    for (i = 0; i < N; i++)
    {
        printf("Array[%d]=%d\n", i, arr[i]);
    }
    for (i = N - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
    N++;
    printf("After insertion:\n");
    for (i = 0; i < N; i++)
    {
        printf("Array[%d]=%d\n", i, arr[i]);
    }

    return 0;
}
// Algorithm for this C code
// 1.Start
// 2.Declare array with sufficient size
// 3.Read number of elements N
// 4. Shift elements from index N−1 to 0 one position to the right
// 5. Insert new value at index 0
// 6.Increase N by 1
// 7. Print the array
// 8.  Stop
