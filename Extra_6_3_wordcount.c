#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, words = 0, length = 0, maxLen = 0, start = 0, maxStart = 0;
    printf("Enter a sentence: ");
    gets(str);   

    while (str[i] != '\0') {
       
        while (str[i] == ' ') {
            i++;
        }
        if (str[i] != '\0') {
            words++;     
            start = i;   
            length = 0;

            while (str[i] != ' ' && str[i] != '\0') {
                length++;
                i++;
            }

            if (length > maxLen) {
                maxLen = length;
                maxStart = start;
            }
        }
    }

    printf("\nTotal words: %d\n", words);
    printf("Longest word: ");
    for (i = 0; i < maxLen; i++) {
        printf("%c", str[maxStart + i]);
    }
    printf("\nLength of longest word: %d\n", maxLen);

    return 0;
}
