#include <stdio.h>

int main()
{
    int n, i, j, gap, temp;
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(gap = n/2; gap > 0; gap = gap/2)
    {
        for(i = gap; i < n; i++)
        {
            temp = a[i];
            j = i;

            while(j >= gap && a[j-gap] > temp)
            {
                a[j] = a[j-gap];
                j = j - gap;
            }

            a[j] = temp;
        }
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
