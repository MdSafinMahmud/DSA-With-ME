#include <stdio.h>
int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30, 35};
    int size = 7;
    int search = 25;
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == search)
        {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found\n");
    return 0;
}