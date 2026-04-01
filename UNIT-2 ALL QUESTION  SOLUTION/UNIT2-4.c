#include <stdio.h>

struct Student {
int id;
float score;
char grade;
};

int main() {
int i, j, n = 5;
struct Student s[5], temp;

for(i = 0; i < n; i++) {
printf("Enter ID, Score and Grade for student %d: ", i+1);
scanf("%d %f %c", &s[i].id, &s[i].score, &s[i].grade);
}

for(i = 0; i < n-1; i++) {
for(j = i+1; j < n; j++) {
if(s[i].score < s[j].score) {
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
}

printf("\nStudents sorted by score (Descending):\n");
for(i = 0; i < n; i++) {
printf("ID: %d  Score: %.2f Grade: %c\n", s[i].id, s[i].score, s[i].grade);
}

return 0;
}
