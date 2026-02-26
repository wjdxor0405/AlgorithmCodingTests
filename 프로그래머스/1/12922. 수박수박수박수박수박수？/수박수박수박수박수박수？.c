#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    int m = 3*n;
    char* answer = (char*)malloc(m+4);
    int i=0;
    const char * subak = "수박";
    
    while(i < m - 4){
        answer[i++] = subak[0];
        answer[i++] = subak[1];
        answer[i++] = subak[2];
        answer[i++] = subak[3];
        answer[i++] = subak[4];
        answer[i++] = subak[5];
    }
        if(n%2){
            answer[i++] = subak[0];
            answer[i++] = subak[1];
            answer[i++] = subak[2];
            answer[i++] = subak[3];
            answer[i++] = subak[4];
            answer[i] = subak[5];
        }
        else{
            answer[i++] = subak[0];
            answer[i++] = subak[1];
            answer[i] = subak[2];
        }
    answer[m] = '\0';

    return answer;
}