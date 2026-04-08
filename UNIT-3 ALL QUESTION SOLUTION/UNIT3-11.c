#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read a line of input

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase: %s", str);

    return 0;
}
