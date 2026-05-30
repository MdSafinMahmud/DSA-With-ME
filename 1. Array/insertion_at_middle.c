#include <stdio.h>
#define MAX 5
int main()
{
    int Arr[MAX] = {1, 2, 4, 5};
    int N = 4;
    int i;
    int indx = 1;
    int vlu = 3;
    printf("Befor Insertion:\n");
    for (i = 0; i < N; i++)
    {
        printf("Array[%d]=%d\n", i, Arr[i]);
    }
    for (i = N; i >= indx + 1; i--)
    {
        Arr[i] = Arr[i - 1];
    }
    Arr[indx + 1] = vlu;
    N++;
    printf("\nAfter Insertion:\n");
    for (i = 0; i < N; i++)
    {
        printf("Array[%d]=%d\n", i, Arr[i]);
    }

    return 0;
}

// It's Algorithm is : begin
// IF N = MAX,
// return ELSE
// N = N + 1
// SEEK Location index
// For All Elements from A[index] to A[N] Move to next adjacent location
// A[index] = New_Element
// end