#include <stdio.h>
#define N 100


// function to Calculate the sum and scalar product of two vectors (T1 and T2)

int sum_scalar_product(int T1[], int T2[], int N, int *sum, int *scalar_product) {
    *sum = 0;
    *scalar_product = 0;
    for (int i = 0; i < N; i++) {
        *sum += T1[i] + T2[i];
        *scalar_product += T1[i] * T2[i];
    }
}


int main(void){
    int T1[N], T2[N], N;
    int sum, scalar_product;
    printf("Enter the number of elements in the vector (N <= 100): ");
    scanf("%d", &N);
    printf("Enter the elements of the first vector:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &T1[i]);
    }
    printf("Enter the elements of the second vector:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &T2[i]);
    }
    sum_scalar_product(T1, T2, N, &sum, &scalar_product);
    printf("Sum of the vectors: %d\n", sum);
    printf("Scalar product of the vectors: %d\n", scalar_product);
    return 0;
    
}