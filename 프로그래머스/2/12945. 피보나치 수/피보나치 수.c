#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

static int F[100000] = {0};  

int Fibo(int n){
    if(F[n] == 0){
        if(n == 0){F[0] = 0;return 0;}
        else if(n == 1){F[1] = 1;return 1;}
        F[n] = (Fibo(n-1) + Fibo(n-2)) % 1234567;
    }
    return F[n];
}


int solution(int n) {    
    return Fibo(n);
}