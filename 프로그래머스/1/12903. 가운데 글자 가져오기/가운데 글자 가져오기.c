#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    int i=0;while(s[i]){i++;}

    int len = i%2 ? 1:2;
    char* answer = (char*)malloc(len+1);

    answer[len-1] = s[i/2];
    answer[len] = '\0';
    if(len == 2){answer[0] = s[i/2 - 1];}

    return answer;
}