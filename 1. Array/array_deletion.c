#include <stdio.h>
#define MAX 5

int main()
{
    int Arr[MAX] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 3;
    int i, j;
    printf("Befor Deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("array[%d]=%d\n", i, Arr[i]);
    }
    j = k;
    while (j < k)
    {
        Arr[j - 1] = Arr[j];
        j++;
    }
    n--;
    printf("After Deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("array[%d]=%d\n", i, Arr[i]);
    }
    return 0;
}

// Algorithm :
// 1. Start
// 2. Set J = K
// 3. Repeat steps 4 and 5 while J < N 4. Set LA[J - 1] = LA[J]
// 5. Set J = J + 1
// 6. Set N = N - 1
// 7. Stop