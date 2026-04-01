#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

static long long s[2001] = {};

long long solution(int n) {
    if(n == 1){s[1] = 1;return 1;}
    else if(n==2){s[2] = 1;return 2;}

    if(s[n]>0){return s[n];}
    else{ s[n] = (solution(n-1) + solution(n-2))%1234567;}

    return s[n];
}
