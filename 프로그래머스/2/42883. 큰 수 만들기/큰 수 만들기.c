#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* number, int k) {
    char* answer = (char*)malloc(1000001);
    int answer_len = 0;

    int i = 0;
    while(number[i]){
        char max = '0';
        int max_j = 0;
        for(int j =0;j<=k;j++){
            if('0' <= number[i + j] && number[i + j] <= '9'){
                if(number[i + j] == '9'){
                    max = '9';
                    max_j = j;
                    break;
                }
                else if(number[i + j] > max){
                    max = number[i+j];
                    max_j = j;
                }
            }
            else{
                max_j = j;
                break;
            }
        }

        answer[answer_len] = number[i + max_j];
        i += max_j + 1;
        answer_len++;
        k -= max_j;

    }

    answer[answer_len] = '\0';
    return answer;
}