#include <stdio.h>



// function to Deletes all zero values from a vector T
int delete_zeros(int T[], int N){
    int i, j;
    for(i = 0; i < N; i++){
        if(T[i] == 0){
            for(j = i; j < N-1; j++){
                T[j] = T[j+1];
            }
            N--;
            i--;
        }
    }
    return N;
}



int main(void){
    int N, T[N];
    printf("Enter the number of elements in the vector (N <= 100): ");
    scanf("%d", &N);
    printf("Enter the elements of the vector:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    N = delete_zeros(T, N);
    printf("Vector without zeros: ");
    for(int i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
    printf("\n");
    return 0;
}