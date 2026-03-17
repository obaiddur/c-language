#include <stdio.h>
int main() {
int n, i;
float arr[100], sum = 0, average;

printf("Enter number of elements: ");
scanf("%d", &n);

for(i = 0; i < n; i++) {
printf("Enter element %d: ", i + 1);
scanf("%f", &arr[i]);
sum = sum + arr[i];
}

average = sum / n;

printf("\nTotal = %.2f", sum);
printf("\nAverage = %.2f", average);

return 0;
}
