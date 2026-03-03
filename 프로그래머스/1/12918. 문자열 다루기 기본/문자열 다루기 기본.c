#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    bool answer = true;
    int i=0;
    while(s[i])
    {
        if(s[i] < 48 || s[i] > 57)
        {
            answer = false;
            break;
        }
        i++;
    }
    if((i == 4 || i == 6) && answer){answer = true;}
    else{answer = false;}
    return answer;
}