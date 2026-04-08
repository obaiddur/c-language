#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int evenSum = 0, oddSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Sum of even numbers = %d\n", evenSum);
    printf("Sum of odd numbers = %d\n", oddSum);

    free(arr);

    return 0;
}
