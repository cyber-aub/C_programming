#include <stdio.h>

// program to find the largest and smallest element in an array 


void minMax(int arr[], int len, int *min, int *max){

*min = *max = arr[0];
int i;
for(i = 0; i < len; i++){
    if(*min > arr[i]){
        *min = arr[i];
    }
    else if(*max < arr[i]){
        *max = arr[i];
    }
}
}


int main(){
int arr[] = {1,5,7,8,4,545,45,7,888,0};
int min,max;
// min = max = arr[0];
int length = sizeof(arr) / sizeof(arr[0]);
minMax(arr, length, &min, &max);
printf("the min = %d. the max = %d", min,max);

return 0;
}