#include <stdio.h>
#include <string.h>

int isNumberPalindrome(int num) {
    int original = num, reversed = 0, digit;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int isStringPalindrome(char str[]) {
    int i = 0, j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j])
            return 0;  
        j--;
    }
    return 1;  
}

int main() {
    int num;
    char str[100];

    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isNumberPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    
    printf("\nEnter a string: ");
    scanf("%s", str); 

    if (isStringPalindrome(str))
        printf("%s is a palindrome string.\n", str);
    else
        printf("%s is not a palindrome string.\n", str);

    return 0;
}
