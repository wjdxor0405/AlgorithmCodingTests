#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* keymap[], size_t keymap_len, const char* targets[], size_t targets_len) {
    int A[26];

    for(int i=0;i<26;i++){A[i]=101;}
    for(int i=0;i<keymap_len;i++){
        int j=0;
        while(keymap[i][j]){
            int index = keymap[i][j] - 65;
            if(A[index] > j+1){A[index]=j+1;}
            j++;
        }
    }

    int* answer = (int*)malloc(targets_len*sizeof(int));
    for(int i=0;i<targets_len;i++){
        answer[i] = 0;
    }

    for(int i=0;i<targets_len;i++){
        int j=0;
        while(targets[i][j]){
            int index = targets[i][j] - 65;
            if(A[index]>100){answer[i] = -1;break;}
            else{answer[i] += A[targets[i][j] - 65];}
            j++;
        }
    }

    return answer;
}