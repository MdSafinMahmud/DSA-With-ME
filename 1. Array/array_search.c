#include <stdio.h>
#define MAX 5
int main()
{
    int n;
    int item = 2;
    int i;
    int found = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray Elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int item2;
    printf("Enter item to search: ");
    scanf("%d", &item);
    int found2 = 0;
    int j = 0;
    while (j < n)
    {
        if (arr[j] == item)
        {
            found = 1;
            break;
        }
        j++;
    }
    if (found)
    {
        printf("Found element at position %d.", item, j+1 );
    }
    else
    {
        printf("Elment are not found");
    }
    return 0;
}