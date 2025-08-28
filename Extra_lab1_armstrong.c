#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digit, n = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);  
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num, i;
    printf("Enter a number to check: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    
    printf("\nArmstrong numbers between 1 and 1000:\n");
    for (i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
