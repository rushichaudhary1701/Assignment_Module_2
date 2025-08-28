#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        largest = 1;
    else if (b >= a && b >= c)
        largest = 2;
    else
        largest = 3;

    if (a <= b && a <= c)
        smallest = 1;
    else if (b <= a && b <= c)
        smallest = 2;
    else
        smallest = 3;

    switch (largest) {
        case 1: printf("Largest number = %d\n", a); break;
        case 2: printf("Largest number = %d\n", b); break;
        case 3: printf("Largest number = %d\n", c); break;
    }

    switch (smallest) {
        case 1: printf("Smallest number = %d\n", a); break;
        case 2: printf("Smallest number = %d\n", b); break;
        case 3: printf("Smallest number = %d\n", c); break;
    }

    return 0;
}
