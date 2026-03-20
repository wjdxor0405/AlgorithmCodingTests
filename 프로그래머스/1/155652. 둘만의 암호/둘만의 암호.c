#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s, const char* skip, int index) {
    bool A[26];
    for(int i=0;i<26;i++){A[i] = true;}

    int skip_len=0;
    for(skip_len=0;skip[skip_len];skip_len++){A[skip[skip_len]-'a'] = false;}

    int count = 26 - skip_len;
    int a[26];
    int b[26];
    int j=0;
    for(int i=0;i<26;i++){
        if(A[i]){a[j] = i;b[i]=j;j++;}
    }


    int len=0;
    while(s[len]){len++;}    
    char* answer = (char*)malloc(len*sizeof(char)+1);
    answer[len] = '\0';
    for(int i=0;i<len;i++){
        

        answer[i] = 'a' + (a[(b[s[i]-'a']+index)%count]);
    }


    return answer;
}
