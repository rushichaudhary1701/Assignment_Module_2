#include <stdio.h>

int main() {
    int i, j, k;
    int A2[2][2], B2[2][2], Sum2[2][2];
    int A3[3][3], B3[3][3], Sum3[3][3], Mul3[3][3];

    printf("=== Matrix Operations (2x2 and 3x3) ===\n\n");
    printf("Enter elements of first 2x2 matrix:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("A2[%d][%d]: ", i+1, j+1);
            scanf("%d", &A2[i][j]);
        }
    }

    printf("\nEnter elements of second 2x2 matrix:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("B2[%d][%d]: ", i+1, j+1);
            scanf("%d", &B2[i][j]);
        }
    }

    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            Sum2[i][j] = A2[i][j] + B2[i][j];
        }
    }

    printf("\n--- Result of 2x2 Matrix Addition ---\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%4d", Sum2[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements of first 3x3 matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("A3[%d][%d]: ", i+1, j+1);
            scanf("%d", &A3[i][j]);
        }
    }

    printf("\nEnter elements of second 3x3 matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("B3[%d][%d]: ", i+1, j+1);
            scanf("%d", &B3[i][j]);
        }
    }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            Sum3[i][j] = A3[i][j] + B3[i][j];
        }
    }

    printf("\n--- Result of 3x3 Matrix Addition ---\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%4d", Sum3[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            Mul3[i][j] = 0;
            for(k=0; k<3; k++) {
                Mul3[i][j] += A3[i][k] * B3[k][j];
            }
        }
    }

    printf("\n--- Result of 3x3 Matrix Multiplication ---\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%4d", Mul3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
