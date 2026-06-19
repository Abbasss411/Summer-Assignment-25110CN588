#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int A[10][10];

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum = sum + A[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}