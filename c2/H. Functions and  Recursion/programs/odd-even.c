#include <stdio.h>

// in direct recursion type. problem :  WAP to print numbers from 1 to 10 in such way that when a number is odd.add 1 and when it even we subtract 1.
void odd();
void even();
int n = 1;

int main() {
    odd();
    return 0;
}

void odd() {
    if (n <= 10) {
        printf("%d\n", n+1);
        n++;
        even();
    }
}
void even() {
    if (n <= 10) {
        printf("%d\n", n-1);
        n++;
        odd();
    }
}