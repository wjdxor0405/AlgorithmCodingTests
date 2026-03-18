#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* X, const char* Y) {
    
    int count_X[10] = {0};
    int count_Y[10] = {0};
    int count[10] = {0};
    int count_sum = 0;

    for(int i=0;X[i];i++){count_X[X[i]-48] += 1;}
    for(int i=0;Y[i];i++){count_Y[Y[i]-48] += 1;}
    for(int i=0;i<10;i++){
        if(count_X[i]>count_Y[i]){count[i] = count_Y[i];}
        else{count[i] = count_X[i];}
        count_sum += count[i];
    }

    char * answer;
    if(count_sum == 0){
        answer = (char*)malloc(3);
        answer[0] = '-';
        answer[1] = '1';
        answer[2] = '\0';
    }
    else if(count_sum == count[0]){
        answer = (char*)malloc(2);
        answer[0] = '0';
        answer[1] = '\0';
    }
    else{

        answer = (char*)malloc(count_sum+1);
        answer[count_sum] = '\0';
        int index = 9;
        int i=0;
        while(index >= 0 && i<count_sum){
            if(count[index] > 0){
                answer[i] = index + 48;
                count[index] -= 1;
                i++;
            }
            else{index--;}
        }
    }

    return answer;
}
