#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int i = 0;
    long long n = num;
    for(i = 0;i <= 500;i++){
        if(n == 1){ break;}
        if(n % 2 == 0){n /= 2;}
        else{
            n = 3*n + 1;
        }
    }
    if(i > 500){return -1;}
    return i;
}