#include <stdio.h>

int main() {
    int num, range, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the range (end value): ");
    scanf("%d", &range);

    printf("\nMultiplication Table of %d (from 1 to %d):\n", num, range);
    for (i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
