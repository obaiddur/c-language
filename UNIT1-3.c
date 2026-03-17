#include <stdio.h>
int main() {
int n, i;
int arr[100];
int max, min;

printf("Enter number of elements: ");
scanf("%d", &n);

for(i = 0; i < n; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &arr[i]);
}
max = arr[0];
min = arr[0];

for(i = 1; i < n; i++) {
if(arr[i] > max) {
max = arr[i];
}
if(arr[i] < min) {
min = arr[i];
        }
}

printf("\nMaximum value = %d", max);
printf("\nMinimum value = %d", min);

return 0;
}
