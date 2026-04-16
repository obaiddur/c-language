#include <stdio.h>

int binarySearch(int a[], int low, int high, int key)
{
if (low > high)
    return -1;

    int mid = (low + high) / 2;

    if (a[mid] == key)
        return mid;
    else if (key < a[mid])
        return binarySearch(a, low, mid - 1, key);
    else
        return binarySearch(a, mid + 1, high, key);
}

int main()
{
    int n, i, key, pos;

    printf("enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("enter elements (sorted): ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter value to search: ");
    scanf("%d", &key);

    pos = binarySearch(a, 0, n - 1, key);

    if (pos == -1)
        printf("not found");
    else
        printf("found at position %d", pos + 1);

    return 0;
}
