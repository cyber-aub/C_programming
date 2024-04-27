#include <stdio.h>

// Write an AP that checks whether two vectors are identical;
// Write an algorithm to remove all identical columns from a matrix. A[N,M].

int areVectorsIdentical(int vector1[], int vector2[], int size) {
    for (int i = 0; i < size; i++) {
        if (vector1[i] != vector2[i]) {
            return 0; // Vectors are not identical
        }
    }
    return 1; // Vectors are identical
}
void removeIdenticalColumns(int matrix[][M], int N, int M) {
    int uniqueColumns[M]; // Array to store unique columns
    int uniqueCount = 0; // Count of unique columns

    // Check each column for uniqueness
    for (int col = 0; col < M; col++) {
        int isUnique = 1; // Flag to indicate uniqueness

        // Compare current column with previous unique columns
        for (int i = 0; i < uniqueCount; i++) {
            if (areVectorsIdentical(matrix[col], uniqueColumns[i], N)) {
                isUnique = 0; // Column is not unique
                break;
            }
        }

        // If column is unique, add it to uniqueColumns array
        if (isUnique) {
            for (int row = 0; row < N; row++) {
                uniqueColumns[uniqueCount][row] = matrix[row][col];
            }
            uniqueCount++;
        }
    }

    // Copy unique columns back to the matrix
    for (int col = 0; col < uniqueCount; col++) {
        for (int row = 0; row < N; row++) {
            matrix[row][col] = uniqueColumns[col][row];
        }
    }
}

int main(void){
    int N, M, A[100][100];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &N, &M);
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &A[i][j]);
        }
    }
    removeIdenticalColumns(A, N, M);
    printf("Matrix after removing identical columns:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}