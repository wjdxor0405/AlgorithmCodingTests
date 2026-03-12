#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {
    char* answer = (char*)malloc(sizeof(char)*4);
    int i = 0;
    int j = 0;
    int k = 0;
    bool possible = true;
    while(k < goal_len){
        if(i<cards1_len && strcmp(goal[k], cards1[i]) == 0){i++;k++;}
        else if(j<cards2_len && strcmp(goal[k],cards2[j]) == 0){j++;k++;}
        else{possible = false;break;}
    }

    if(possible){strcpy(answer, "Yes");}
    else{strcpy(answer, "No");}

    return answer;
}