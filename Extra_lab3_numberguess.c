#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, guess, attempts = 0, maxAttempts = 10;
    number = (rand() % 100) + 1;
    printf("=== Number Guessing Game ===\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n", maxAttempts);
   while (attempts < maxAttempts) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        } else if (guess < number) {
            printf("Too low! Try again.");
        } else {
            printf("Too high! Try again.");
        }
    }

    if (guess != number) {
        printf("\nSorry! You've used all attempts. The number was %d.\n", number);
    }

    return 0;
}
