#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = (right + left)*(right - left + 1)/2;
    for(int i=1;i<=31;i++){
        int t = i*i;
        if(t>=left && t<=right){
            answer -= t;
            answer -= t;
        }
    }
    return answer;
}