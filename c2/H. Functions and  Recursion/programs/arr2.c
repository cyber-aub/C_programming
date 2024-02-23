#include <stdio.h>

// sum of rows and sum of columns 

int main(){
int i,j;
int arr[5][5];

for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        scanf("%d", &arr[i][j]);
    }
}

puts("row sum = ");
for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        int sum =+ arr[i][j];
    }
}

// when row is 0 colums is moving from 0 1 2 ....

puts("colums sum = ");
for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        int sum =+ arr[j][i];
    }
}

// when column is 0 row is moving from 0 1 2 ....

}