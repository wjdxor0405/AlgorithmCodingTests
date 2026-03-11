#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;
    int t = 0;
    while(n>=a){
        t = (n/a)*b;
        answer += t;
        n = n%a + t;
    }

    return answer;
}