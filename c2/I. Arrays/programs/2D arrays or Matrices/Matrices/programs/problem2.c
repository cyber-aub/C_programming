#include <stdio.h>

// function to  Calculates the number of vowels belonging to matrix A.
int countVowels(int A[100][100], int N, int M){
    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(A[i][j] == 'a' || A[i][j] == 'e' || A[i][j] == 'i' || A[i][j] == 'o' || A[i][j] == 'u'){
                count++;
            }
        }
    }
    return count;
}

int main(void){
    int N, M, A[100][100];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &N, &M);
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf(" %c", &A[i][j]);
        }
    }
    printf("Number of vowels in the matrix: %d\n", countVowels(A, N, M));
    return 0;
}