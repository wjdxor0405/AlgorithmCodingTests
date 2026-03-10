#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* s) {

    int* answer = (int*)malloc(sizeof(int)*10000);
    int a[26];
    int i=0;
    for(i=0;i<26;i++){a[i]=-1;}
    i=0;
    while(s[i]){
        if(a[s[i]-97] < 0){
            answer[i] = -1;
        }
        else{
            answer[i] = i - a[s[i]-97];
        }
        a[s[i]-97] = i;
        i++;
    }

    return answer;
}