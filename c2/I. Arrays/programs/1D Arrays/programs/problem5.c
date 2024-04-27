#include <stdio.h

// function to Inverts the contents of a T vector
int invert(int T[], int N){
    int temp;
    for(int i = 0; i < N/2; i++){
        temp = T[i];
        T[i] = T[N-i-1];
        T[N-i-1] = temp;
    }
}

int main(void){
    int N, T[N];
    printf("Enter the number of elements in the vector (N <= 100): ");
    scanf("%d", &N);
    printf("Enter the elements of the vector:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    invert(T, N);
    printf("Inverted vector: ");
    for(int i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
    printf("\n");
    return 0;
}