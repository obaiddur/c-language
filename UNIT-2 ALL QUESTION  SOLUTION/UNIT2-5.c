#include <stdio.h>

#define MAX 100

void printStudents(char names[][50], float grades[], int n) {
    int i;

    printf("Students with grade greater than 5.0:\n");

    for(i = 0; i < n; i++) {
        if(grades[i] > 5.0) {
            printf("%s\n", names[i]);
        }
    }
}

int main() {
    int n, i;
    char names[MAX][50];
    float grades[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter grade of student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    printStudents(names, grades, n);

    return 0;
}
