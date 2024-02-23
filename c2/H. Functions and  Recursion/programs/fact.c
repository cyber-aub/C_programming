#include <stdio.h>
 // simple direct recursion to caluculate the factorial of a number   

int fact(int n) {
    if (n == 0) {
        return 1;
    }else{
        return n * fact(n - 1);
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, fact(n));
    return 0;
}