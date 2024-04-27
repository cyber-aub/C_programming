#include <stdio.h>

/*function that splits a vector T of N (N≤250) positive integers into two vectors
vectors T1 and T2 containing the even and odd numbers of T respectively.
*/
int split(int T[], int N, int T1[], int T2[]){
    int i, j = 0, k = 0;
    for(i = 0; i < N; i++){
        if(T[i] % 2 == 0){
            T1[j] = T[i];
            j++;
        }else{
            T2[k] = T[i];
            k++;
        }
    }
    return j;

}

int main(void){
    int N, T[250], T1[250], T2[250];
    printf("Enter the number of elements in the vector (N <= 250): ");
    scanf("%d", &N);
    printf("Enter the elements of the vector:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    int N1 = split(T, N, T1, T2);
    printf("Vector with even numbers: ");
    for(int i = 0; i < N1; i++){
        printf("%d ", T1[i]);
    }
    printf("\n");
    printf("Vector with odd numbers: ");
    for(int i = 0; i < N-N1; i++){
        printf("%d ", T2[i]);
    }
    printf("\n");
    return 0;
}