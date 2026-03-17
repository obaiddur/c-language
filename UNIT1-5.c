#include <stdio.h>
int main() {
int n, i;
int arr1[100], arr2[100];

printf("Enter number of elements: ");
scanf("%d", &n);
for(i = 0; i < n; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &arr1[i]);
}

for(i = 0; i < n; i++) {
arr2[i] = arr1[i];
}

printf("\nElements of first array:\n");
for(i = 0; i < n; i++) {
printf("%d ", arr1[i]);
}

printf("\nElements of second array:\n");
for(i = 0; i < n; i++) {
printf("%d ", arr2[i]);
}

return 0;
}
