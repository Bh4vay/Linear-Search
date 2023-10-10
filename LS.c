#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int a[size], i, search, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= size)
    {
        printf("Enter array elements:\n");
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);

        printf("Enter element to be searched: ");
        scanf("%d", &search);

        for (i = 0; i < n; ++i)
            if (a[i] == search)
                break;

        if (i < n)
            printf("Element found at index %d.", i);
        else
            printf("Element not found.");

        return 0;
    }
    else
    {
        printf("Limit of the array crossed!");
    }
    return 0;
}