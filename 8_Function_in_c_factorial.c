#include <stdio.h>

int factorial(int n);

int factorial(int n) {
    if(n==0) 
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Factorial = %d\n", factorial(num));
    return 0;
}
