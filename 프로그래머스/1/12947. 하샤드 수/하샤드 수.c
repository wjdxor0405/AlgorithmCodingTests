#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int s = 0;
    int y = x;
    while(y)
    {
        s += y%10;
        y /= 10;
    }
    if(x % s != 0){answer = false;}
    
    return answer;
}