#include <stdio.h>

// function to Searches for an element in matrix A.
int search(int A[100][100], int N, int M, int x){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(A[i][j] == x){
                return 1;
            }
        }
    }
    return 0;
}

int main(void){
    int N, M, A[100][100], x;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &N, &M);
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    if(search(A, N, M, x)){
        printf("Element found\n");
    }else{
        printf("Element not found\n");
    }
    return 0;
}