#include <stdio.h>
// problem 3   output: 14 11 8 5 2 

int fun2(int a, int b);

int fun(){
    static int var = 16;
    return var--;        // we first return the value then we decremente the variable
}

int main(){

    for(fun();fun();fun()){           // start never changed (16)  condition and steps will change during the loop when the condition is 0 the loop will break
        printf("%i",var);
    }
    int a = 7, b = 7;
    fun2(a,b);

    return 0;
}