#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, spaces = 0, vowels = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0') {
    if(str[i] == ' ')
    spaces++;

    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
    str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    vowels++;

    i++;
    }

    printf("Number of spaces = %d\n", spaces);
    printf("Number of vowels = %d", vowels);

    return 0;
}
