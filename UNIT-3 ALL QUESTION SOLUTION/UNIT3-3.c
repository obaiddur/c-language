#include <stdio.h>

int findMax(int a, int b) {
if (a > b)
    return a;
    else
    return b;
}

int findMin(int a, int b) {
if (a < b)
    return a;
    else
    return b;
}

int main() {
    int x, y, max, min;

    int (*funcPtr)(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    funcPtr = findMax;
    max = funcPtr(x, y);

    funcPtr = findMin;
    min = funcPtr(x, y);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
