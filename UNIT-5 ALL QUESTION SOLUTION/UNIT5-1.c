#include<stdio.h>

int main()
{
    int a[100], n, i, s, f=0;

    printf("enter n: ");
    scanf("%d",&n);

    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    printf("enter value: ");
    scanf("%d",&s);

    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
        printf("found at %d",i+1);
        f=1;
        break;
        }
    }

    if(f==0)
    printf("not found");

    return 0;
}
