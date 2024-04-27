#include <stdio.h>


/* function to m that determines the number of successions of two particular values (V1 and V2) in the vector.*/
int successions(int T[], int N, int V1, int V2){
    int i, count = 0;
    for(i = 0; i < N-1; i++){
        if(T[i] == V1 && T[i+1] == V2){
            count++;
        }
    }
    return count;
}

int main(void){
    int N, T[250], V1, V2;
    printf("Enter the number of elements in the vector (N <= 250): ");
    scanf("%d", &N);
    printf("Enter the elements of the vector:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    printf("Enter the values V1 and V2: ");
    scanf("%d %d", &V1, &V2);
    int count = successions(T, N, V1, V2);
    printf("Number of successions of %d and %d: %d\n", V1, V2, count);
    return 0;
}