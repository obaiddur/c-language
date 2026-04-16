#include<stdio.h>

int main()
{
    int a[50], n, i, key;
    int low, high, mid;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter elements (sorted):\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter value to search: ");
    scanf("%d",&key);

    low = 0;
    high = n-1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
        printf("Found at position %d", mid+1);
        return 0;
        }
        else if(key < a[mid])
        high = mid - 1;
        else
        low = mid + 1;
    }

    printf("Not found");

    return 0;
}
