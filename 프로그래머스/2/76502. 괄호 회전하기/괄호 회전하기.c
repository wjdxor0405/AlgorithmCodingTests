#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool check(const char * s, int r, int len){
    int i=r;
    char stack[1000];
    int pos = 0;
    stack[0] = s[r];
    
    for(int j=0;j<len;j++){

        if(pos <0){
            pos++;
            stack[pos] = s[i];
        }
        if(stack[pos] == '{' && s[i] == '}'){
            pos--;
        }
        else if(stack[pos] == '[' && s[i] == ']'){
            pos--;
        }
        else if(stack[pos] == '(' && s[i] == ')'){
            pos--;
        }
        else{
            pos++;
            stack[pos] = s[i];
        }
        i = (i+1)%len;

    }

    if(pos == 0)return true;
    
    return false;
}


int solution(const char* s) {
    int answer = 0;
    int len = 0;
    while(s[len]){len++;}

    for(int i=0;i<len;i++){
        if(check(s, i, len)){
            answer++;
        }
    }
    
    return answer;
}
