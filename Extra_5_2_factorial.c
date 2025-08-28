#include <stdio.h>

long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("\nFactorial of %d (Recursive) = %lld", num, factorial_recursive(num));
        printf("\nFactorial of %d (Iterative) = %lld\n", num, factorial_iterative(num));
    }

    return 0;
}
