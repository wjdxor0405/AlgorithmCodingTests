#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    while(n){
        answer *= 3;
        answer += n%3;
        n /= 3;
    }
    
    return answer;
}