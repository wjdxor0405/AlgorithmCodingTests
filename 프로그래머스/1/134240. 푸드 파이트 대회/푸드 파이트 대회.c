#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int food[], size_t food_len) {
    int len = 1;    
    for(int i=1;i<food_len;i++){
        if(food[i] %2 == 0){
            len += food[i];
        }else{
            len += food[i] - 1;
        }
    }
    char* answer = (char*)malloc((len+1)*sizeof(char));

    int j=0;
    for(int i=1;i<food_len;i++){
        int t = j + food[i]/2;
        for(;j<t;j++){
            answer[j] = i + 48;
            answer[len-j-1] = i + 48;
        }
    }
    answer[len/2] = '0';
    answer[len] = '\0';

    
    return answer;
}