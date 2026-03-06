#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* t, const char* p) {
    int answer = 0;
    int len =0;

    while(p[len]){len++;}

    int i=0;
    while(t[i+len-1]){
        bool update =true;
        for(int j=0;j<len;j++){

            if(t[i+j]<p[j]){break;}
            else if(t[i+j]>p[j]){update = false;break;}
        }
        if(update){;answer++;}
        i++;
    }

    return answer;
}