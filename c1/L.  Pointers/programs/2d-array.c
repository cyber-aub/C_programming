// program to print 2d array using pointers !

#include <stdio.h>


int main(){
    int arr[2][2] = {4,5,5,6};
    int row = 2, column = 2;
    int *p;

for(p = &arr[0][0]; p <= &arr[row-1][column-1]; p++){
    printf("%d", *p);
}
}