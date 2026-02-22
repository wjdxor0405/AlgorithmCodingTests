#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer;
    if(a>b){answer = (a-b+1);}
    else{answer = (b-a+1);}
    answer *= (long long)a+(long long)b;
    answer /= 2;
    return answer;
}