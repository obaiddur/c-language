#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; printf("enter n:");
scanf("%d",&n);
    int * arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
scanf("%d",&arr[i]);
    int sum = 0;
    for (int i = 0; i < n; i++)
sum += arr[i];
    printf("sum = %.d prime number = %.2f\n",sum,(float)sum/n);
    return 0;
}
