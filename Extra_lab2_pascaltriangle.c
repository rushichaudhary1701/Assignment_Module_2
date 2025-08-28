#include <stdio.h>


long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void printPascalRecursive(int n, int row) {
    if (row == n) return; 
   
    for (int i = 0; i < n - row - 1; i++) {
        printf("  ");
    }

    long long val = 1;
    for (int i = 0; i <= row; i++) {
        printf("%4lld", val);
        val = val * (row - i) / (i + 1);  
    }
    printf("\n");
    printPascalRecursive(n, row + 1);
}

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    printf("\nPascal's Triangle (Iterative):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++)
            printf("  ");  
        for (int j = 0; j <= i; j++)
            printf("%4lld", combination(i, j));
        printf("\n");
    }

    printf("\nPascal's Triangle (Recursive):\n");
    printPascalRecursive(N, 0);

    return 0;
}
