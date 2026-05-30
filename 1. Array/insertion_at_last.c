#include <stdio.h>
#define MAX 5
int main()
{
    int Arr[MAX] = {1, 2, 4, 5};
    int N = 4;
    int i;
    int indx = 3;
    int vlu = 3;
    printf("Befor insertion:\n");
    for (i = 0; i < N; i++)
    {
        printf("array[%d]=%d\n", i, Arr[i]);
    }
    Arr[indx + 1] = vlu;
    N++;
    printf("After insertion:\n");
    for (i = 0; i < N; i++){
        printf("array[%d]=%d\n", i, Arr[i]);
    }
    return 0;
}

// Algorithm : begin
//   IF N = MAX,
//   return ELSE
//   N = N + 1

//   SEEK Location index
// For All Elements from A[index - 1] to A[N] Move to next adjacent location
//       A[index - 1] = New_Element

//   end