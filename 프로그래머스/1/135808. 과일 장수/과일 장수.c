#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int k, int m, int score[], size_t score_len) {
    int answer = 0;
    int score_count[10];
    for(int i=1;i<=9;i++){score_count[i]=0;}

    for(int i=0;i<score_len;i++){
        score_count[score[i]] += 1;
    }

    int b = 0;
    int q = 0;
    int r = 0;
    for(int i=k;i>0;i--){
        
        q = (score_count[i]+b) / m;
        r = (score_count[i]+b) % m;
        answer += i*q*m;
        b = r;

    }
    return answer;
}