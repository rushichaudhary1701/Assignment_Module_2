#include <stdio.h>

int main() {
    // ----------- 1D Array Part -----------
    int arr[5];  
    printf("Enter 5 integers:\n");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered (1D array): ");
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // ----------- 2D Array Part -----------
    int matrix[3][3], sum = 0;

    printf("Enter 9 integers for a 3x3 matrix:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // add to sum while reading
        }
    }

    printf("\nMatrix elements:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all matrix elements = %d\n", sum);

    return 0;
}
