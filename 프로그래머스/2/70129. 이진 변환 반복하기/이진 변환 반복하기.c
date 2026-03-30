#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* s) {
    int* answer = (int*)malloc(sizeof(int) * 2);

    int result = 1;
    int len = 0;
    while(s[len]){len++;}

    char str[len+1];
    char str_1[len+1];
    for(int i=0;i<len;i++){
        str[i] = s[i];
        str_1[i] = s[i];
    }
    str[len] = '\0';
    str_1[len] = '\0';

    answer[0] = 0;
    answer[1] = 0;

    while(1){
        int i=0;
        int j=0;

        while(str[i]){
            if(str[i] == '1'){
                str_1[j] = '1';
                j++;
            }
            i++;
        }
        str_1[j] = '\0';
        if(i <2){break;}

        answer[1] += i - j;
        int k = 0;
        while(j >0){
            str[k] = (j % 2) + 48;
            j /= 2;
            k++;
        }
        str[k] = '\0';
        answer[0] += 1;
    }
    
    return answer;
}