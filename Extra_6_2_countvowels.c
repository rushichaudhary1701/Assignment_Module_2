#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int i = 0;

    printf("Enter a string: ");
    gets(str);   

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;  
        }

       
        if ((ch >= 'a' && ch <= 'z')) {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
       
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        
        else if (ch != ' ' && ch != '\n' && ch != '\t') {
            special++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
