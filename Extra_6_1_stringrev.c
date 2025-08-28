#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void reverseString(char str[]) {
    int i, j;
    char temp;
    int len = stringLength(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
