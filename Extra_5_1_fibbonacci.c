#include <stdio.h>

int fib_recursive(int n) {
    if (n <= 1)
        return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib_iterative(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N, i;

    printf("Enter the number : ");
    scanf("%d", &N);
    printf("\nFibonacci sequence (first %d terms using recursion):\n", N);
    for (i = 0; i < N; i++) {
        printf("%d ", fib_recursive(i));
    }

    printf("\n\n%dth Fibonacci number (Recursive): %d", N, fib_recursive(N));
    printf("\n%dth Fibonacci number (Iterative): %d\n", N, fib_iterative(N));

    return 0;
}
