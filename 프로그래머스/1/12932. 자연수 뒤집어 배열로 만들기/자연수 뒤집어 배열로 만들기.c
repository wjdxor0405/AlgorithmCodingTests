#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int len = 0;
    long long m = n;
    for(len = 1;len<11;len++){
        m /= 10;
        if(m == 0)break;
    }
    int* answer = (int*)malloc(sizeof(int)*len);

    for(int i = 0;i<len;i++){
        answer[i] = n % 10;
        n /= 10;
    }

    return answer;
}