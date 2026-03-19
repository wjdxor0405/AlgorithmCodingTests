#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* s) {
    int answer = 0;
    int i=0;
    int same = 0;
    int diff = 0;
    char target = ' ';
    while(s[i]){
        if(same == 0){target = s[i];same++;answer++;}
        else{
            if(s[i] == target){same++;}
            else{diff++;}

            if(same == diff){same = 0; diff =0;}
        }
        i++;
    }
    return answer;
}