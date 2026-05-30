#include <stdio.h>

int main()
{
    int i, n, target;
    printf("Enter array SIZE: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Elements: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &target);
    int fnd = 0;
    for (i = 0; i < n; i++)

    {
        if (arr[i] == target)
        {
            printf("Found it at index %d\n", i);
            fnd = 1;
            break;
        }
    }
    if (fnd == 0)
    {
        printf("NOT fount!\n");
    }

    return 0;
}