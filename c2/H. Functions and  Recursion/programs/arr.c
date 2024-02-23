#include <stdio.h>
//program to check if number appears more than once in set of positive numbers 
int main(void){
    int seen[] = {0};
    int n;
    printf("enter the negga");
    scanf("%d",&n);
    while(n > 0){
       int rem = n%10;
        if(seen[rem] == 1){
            break;
        }
        seen[rem] = 1;
        n = n / 10;
    }
    
    if(n > 0) puts("yes");
    else puts("no");
}
