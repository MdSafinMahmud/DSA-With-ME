#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int i, n = 5;
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]=%d\n", i, array[i]);
    }
    return 0;
}