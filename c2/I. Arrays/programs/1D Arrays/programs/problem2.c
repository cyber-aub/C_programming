#include <stdio.h>
#define N 100

// function to calculate the product of array elements
int product(int arr[], int n){
    int prod = 1;
    for(int i = 0; i < n; i++){
        prod *= arr[i];
    }
    return prod;
}

// function to find strictly positive elements 
int strictly_positive(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            count++;
        }
    }
    return count;
}
int main(void){


int arr[N], n;
printf("Enter the number of elements in the vector (N <= 100): ");
scanf("%d", &n);
for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}
printf("Product of the elements: %d\n", product(arr, n));
printf("Number of strictly positive elements: %d\n", strictly_positive(arr, n));
return 0;


}