#include <stdio.h>
#include <string.h>
int main() {
    char s1[50], s2[50];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    strcat(s1, s2);
    printf("Concatenated: %s\n", s1);
    printf("Length: %d\n", (int)strlen(s1));
    return 0;
}
