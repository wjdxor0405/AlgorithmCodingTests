#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    int len=0;
    while(s[len]){len++;}

    char* answer = (char*)malloc(len+1);
    for(int i=0;i<len;i++){answer[i] = 'A' - 1;}

    for(int i=0;i<len;i++){
        int j=0;
        for(;j<=i;j++){
            if(answer[j] <= s[i]){
                break;
            }
        }
        int index_j = j;

        for(j = i;index_j<=j;j--){
            answer[j+1] = answer[j];
        }
        answer[index_j] = s[i];
                
    }
    answer[len] = '\0';

    return answer;
}