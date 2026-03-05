#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    int n=0;while(s[n]){n++;}
    char* answer = (char*)malloc(n+1);
    bool U = true;
    for(int i=0;i<n;i++){
        if(s[i] == ' '){answer[i] = ' ';U = true;continue;}
        if(U){
            if('a' <= s[i] && s[i] <= 'z'){answer[i] = s[i]-32;}
            else{answer[i] = s[i];}
            U = false;
        }
        else{
            if('A' <= s[i] && s[i] <= 'Z'){answer[i] = s[i]+32;}
            else{answer[i] = s[i];}
            U = true;
        }
    }
    answer[n] = '\0';
    return answer;
}