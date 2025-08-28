#include <stdio.h>

int main() {
    int num = 10;        // variable
    int *ptr;            // pointer declaration

    ptr = &num;          // pointer stores the address of num

    printf("Initial value of num: %d\n", num);
    printf("Address of num (stored in ptr): %p\n", ptr);

    // Modify num using pointer
    *ptr = 20;           // change value at address

    printf("Modified value of num (via pointer): %d\n", num);

    return 0;
}
