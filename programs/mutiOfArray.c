#include <stdio.h>

int main() {
    int n1, m1, n2, m2;
    
    printf("No. of rows in the 1st matrix = ");
    scanf("%d", &n1);
    printf("No. of columns in the 1st matrix = ");
    scanf("%d", &m1);
    
    printf("No. of rows in the 2nd matrix = ");
    scanf("%d", &n2);
    printf("No. of columns in the 2nd matrix = ");
    scanf("%d", &m2);
    
    // Check if matrices are compatible for multiplication
    if (m1 != n2) {
        printf("Matrix multiplication not possible. Number of columns in the 1st matrix must equal the number of rows in the 2nd matrix.\n");
        return 1;
    }

    int array1[n1][m1], array2[n2][m2], result[n1][m2];

    printf("Enter elements of 1st matrix:\n");
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m1; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for(int i = 0; i < n2; i++) {
        for(int j = 0; j < m2; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    // Initialize result matrix to zero
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m2; j++) {
            for(int k = 0; k < m1; k++) {
                result[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    // Display result
    printf("Result of matrix multiplication:\n");
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}