#include <stdio.h>

int main() {
    int n, i, j, Prime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
       Prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
              Prime = 0;
                break;
            }
        }

        if (Prime) {
            printf("%d ", i);
        }
    }

    printf("\n");


   Prime = 1;
    if (n <= 1) Prime = 0;
    for (j = 2; j <= n / 2; j++) {
        if (n % j == 0) {
            Prime = 0;
            break;
        }
    }

    if (Prime)
        printf("%d is a Prime number\n", n);
    else
        printf("%d is NOT a Prime number\n", n);

    return 0;
}
