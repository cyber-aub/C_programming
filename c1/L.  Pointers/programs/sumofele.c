// sum of elements of array ! 

#include <stdio.h>


int main(){
    int a[] = {1,1,1,1,1,1};
int sum, *p;

    for(p = &a[0]; p <= &a[5]; p++){        // we are adding addresses to the pointer not values ! and then moving forward in the array 
        sum += *p;
    }

printf("%d\n", sum);
sum = 0;

for(p = a; p <= a + 5; p++){
    sum += *p;
}

printf("the sum = %d\n", sum);

sum = 0;

// idk what i am doing here ! hhhh
for(int i = 1; i <= 6; i++){
    sum += *(a+i);
}

printf("the sum = %d\n", sum);

}