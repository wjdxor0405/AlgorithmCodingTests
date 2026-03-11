#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int k, int score[], size_t score_len) {
    int* answer = (int*)malloc(sizeof(int)*(score_len));
    int rank_k[101];
    for(int i=0;i<k;i++){rank_k[i] = -1;}
    for(int i=0;i<score_len;i++){
        int idex = i<k ? i:k-1;
        int j = idex+1;
        for(;0<=j;j--){
            if(rank_k[j] < score[i])
            {
                rank_k[j+1] = rank_k[j];
            }
            else{
                break;
            }
        }
        rank_k[j+1] = score[i];
        answer[i] = rank_k[idex];
    }    
    
    return answer;
}