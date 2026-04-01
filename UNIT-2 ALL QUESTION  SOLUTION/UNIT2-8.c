#include <stdio.h>

struct StudentStruct {
int id;
float marks;
char grade;
};

union StudentUnion {
int id;
float marks;
char grade;
};

int main() {

struct StudentStruct s;
union StudentUnion u;

s.id = 7199;
s.marks = 89.5;
s.grade = 'A';

printf("Structure Values:\n");
printf("ID = %d\n", s.id);
printf("Marks = %.2f\n", s.marks);
printf("Grade = %c\n", s.grade);

u.id = 101;
u.marks = 89.5;
u.grade = 'A';

printf("\nUnion Values:\n");
printf("ID = %d\n", u.id);
printf("Marks = %.2f\n", u.marks);
printf("Grade = %c\n", u.grade);

printf("\nSize of Structure = %lu bytes\n", sizeof(s));
printf("Size of Union = %lu bytes\n", sizeof(u));

return 0;
}
