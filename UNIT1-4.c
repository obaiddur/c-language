#include <stdio.h>

int main() {
int n, i;
int arr[100];
int positive = 0, negative = 0, even = 0, odd = 0;

printf("Enter number of elements: ");
scanf("%d", &n);

for(i = 0; i < n; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &arr[i]);

if(arr[i] > 0)
positive++;
else if(arr[i] < 0)
negative++;

if(arr[i] % 2 == 0)
even++;
else
odd++;
}

printf("\nPositive numbers = %d", positive);
printf("\nNegative numbers = %d", negative);
printf("\nEven numbers = %d", even);
printf("\nOdd numbers = %d", odd);

return 0;
}
