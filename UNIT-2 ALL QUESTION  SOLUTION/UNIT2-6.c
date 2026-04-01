#include <stdio.h>
#include <string.h>

struct Student {
int id;
char name[50];
int joinYear;
};

void printStudents2019(struct Student s[], int n) {
int i;
printf("Students who joined in 2019:\n");

for(i = 0; i < n; i++) {
if(s[i].joinYear == 2019) {
printf("ID: %d\n", s[i].id);
printf("Name: %s\n", s[i].name);
printf("Join Year: %d\n\n", s[i].joinYear);
}
}
}

int main() {
struct Student s[5] = {
{1, "rahman", 2018},
{2, "altamash", 2019},
{3, "rahul", 2020},
{4, "raja", 2019},
{5, "priya", 2017}
};

int n = 5;

printStudents2019(s, n);

return 0;
}
