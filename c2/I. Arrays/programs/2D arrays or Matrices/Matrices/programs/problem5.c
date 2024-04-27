/*
Given a matrix A(N, M) of integers (N≤20 and M≤30), write an algorithm that :
- Calculates and saves the sum of each column,
- Determines the position Jmin of the minimum sum and the position Jmax of the maximum
sum.
- Permutes the two index columns Jmin and Jmax of matrix A if Jmin > Jmax
*/

#include <stdio.h>

#define N 20
#define M 30

void calculateColumnSums(int A[N][M], int columnSums[M]) {
    for (int j = 0; j < M; j++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += A[i][j];
        }
        columnSums[j] = sum;
    }
}

int findMinSumIndex(int columnSums[M]) {
    int minSumIndex = 0;
    for (int j = 1; j < M; j++) {
        if (columnSums[j] < columnSums[minSumIndex]) {
            minSumIndex = j;
        }
    }
    return minSumIndex;
}

int findMaxSumIndex(int columnSums[M]) {
    int maxSumIndex = 0;
    for (int j = 1; j < M; j++) {
        if (columnSums[j] > columnSums[maxSumIndex]) {
            maxSumIndex = j;
        }
    }
    return maxSumIndex;
}

void swapColumns(int A[N][M], int column1, int column2) {
    for (int i = 0; i < N; i++) {
        int temp = A[i][column1];
        A[i][column1] = A[i][column2];
        A[i][column2] = temp;
    }
}

int main() {
    int A[N][M] = {
        // Initialize your matrix here
    };

    int columnSums[M];
    calculateColumnSums(A, columnSums);

    int minSumIndex = findMinSumIndex(columnSums);
    int maxSumIndex = findMaxSumIndex(columnSums);

    if (minSumIndex > maxSumIndex) {
        swapColumns(A, minSumIndex, maxSumIndex);
    }

    // Print the modified matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}