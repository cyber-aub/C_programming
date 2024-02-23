// program to reverse series of numbers using pointers !!!

#include <stdio.h>

#define N 8
int main(){


int arr[N] = {1,2,3,4,5,6,7,8,9};



// method 1 MINE
int *p;
 p = &arr[8];

 while(p >= &arr[0]){

    printf("%d",*p);
    --p;
 }


 // Metthod 2 

 int *pi;

 for(p = arr+N-1; p >=arr; p--){
    printf("%d", *p);
 }




























}