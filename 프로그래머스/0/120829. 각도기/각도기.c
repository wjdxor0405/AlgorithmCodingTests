#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int answer = 2 - (180-angle)/90 + angle/90;
    
    return answer;
}