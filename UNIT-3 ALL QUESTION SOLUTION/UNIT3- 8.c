#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 2, c = 2, i, j;

    int **A = malloc(r * sizeof(int*));
    int **B = malloc(r * sizeof(int*));
    int **C = malloc(r * sizeof(int*));

    for(i = 0; i < r; i++) {
    A[i] = malloc(c * sizeof(int));
    B[i] = malloc(c * sizeof(int));
    C[i] = malloc(c * sizeof(int));
}

    int valA[2][2] = {{1,8},{12,4}};
    int valB[2][2] = {{10,9},{7,8}};

    for(i = 0; i < r; i++)
    for(j = 0; j < c; j++) {
    A[i][j] = valA[i][j];
    B[i][j] = valB[i][j];
    C[i][j] = A[i][j] - B[i][j];
}

    for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++)
    printf("%d ", C[i][j]);
    printf("\n");
    }

    return 0;
}
