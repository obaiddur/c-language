#include <stdio.h>

struct Date {
int day;
int month;
int year;
};

struct Student {
int id;
char name[50];
struct Date dob;
};

int main() {
struct Student s1;
s1.id = 7199;
sprintf(s1.name, "rahman");

s1.dob.day = 12;
s1.dob.month = 03;
s1.dob.year = 2007;

printf("Student ID: %d\n", s1.id);
printf("Student Name: %s\n", s1.name);
printf("Date of Birth: %d/%d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);

return 0;
}
