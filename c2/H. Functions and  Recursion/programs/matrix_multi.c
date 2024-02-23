// matrix multiplication 

#include <stdio.h>
#define MAX 50

int main(void){
int acolumn,arow,bcolumn,brow,i,j,k;
printf("enter the a row column = ");
scanf("%d %d",&arow,&acolumn);
printf("enter the b row column = ");
scanf("%d %d",&brow,&bcolumn);

if(brow != acolumn) return 1;

int arr[arow][acolumn];
for(i=0; i<arow; i++){
    for(j=0; j<acolumn; j++){
        scanf("%d", &arr[i][j]);
    }
}

int arr2[brow][bcolumn];
for(i=0; i<brow; i++){
    for(j=0; j<bcolumn; j++){
        scanf("%d", &arr[i][j]);
    }
}

int sum = 0;
int product[MAX][MAX];
for(i=0; i<arow; i++){
    for(j=0; j<acolumn; j++){
        for(k = 0; k < brow; k++){
            sum += arr[i][k] * arr2[k][i];
        }
        product[i][j] = sum;
        sum = 0;
    }
}




 
}