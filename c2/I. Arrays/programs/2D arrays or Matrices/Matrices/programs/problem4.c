#include <stdio.h>

//function to  Rotate the columns of matrix A

int rotateColumns(int A[100][100], int N, int M, int B[100][100]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            B[i][j] = A[i][M-j-1];
        }
    }
    return 0;
}

int main (void){
    int N, M, A[100][100], B[100][100];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &N, &M);
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &A[i][j]);
        }
    }
    rotateColumns(A, N, M, B);
    printf("Matrix after rotating the columns:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}