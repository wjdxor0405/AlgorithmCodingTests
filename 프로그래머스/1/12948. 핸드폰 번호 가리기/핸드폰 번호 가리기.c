#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* phone_number) {
    int len=0;
    
    while(phone_number[len]){
        len++;
    }
    len = len;

    char* answer = (char*)malloc((len+1)*sizeof(char));
    for(int i=0;i<len-4;i++){
        answer[i] = '*';
    }
    answer[len-4] = phone_number[len-4];
    answer[len-3] = phone_number[len-3];
    answer[len-2] = phone_number[len-2];
    answer[len-1] = phone_number[len-1];
    answer[len] = '\0';

    return answer;
}