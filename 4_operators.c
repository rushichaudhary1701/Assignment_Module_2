#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Arithmetic: %d + %d = %d\n", a, b, a+b);
    printf("Relational: %d > %d = %d\n", a, b, a>b);
    printf("Logical: (%d && %d) = %d\n", a, b, (a&&b));
    return 0;
}
