#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool compare(const char * c, int index, const char * s, size_t size){
    bool result = true;
    for(int i=0;i<size;i++){
        if(c[index + i] == s[i]){}
        else{result = false;break;}
    }
    return result;
}

bool possible(const char * c){
    int len=0;
    int i=0;
    bool result = true;
    int a = 0;
    while(c[len]){len++;}
    while(i<len){
        
        if(compare(c,i,"aya",3)){
            if(a == 1){result = false;break;}
            i += 3;
            a = 1;
        }
        else if(compare(c,i,"woo",3)){
            if(a == 3){result = false;break;}
            i += 3;
            a = 3;
        }
        else if(compare(c,i,"ye",2)){
            if(a == 2){result = false;break;}
            i += 2;
            a = 2;
        }
        else if(compare(c,i,"ma",2)){
            if(a == 4){result = false;break;}
            i += 2;
            a = 4;
        }
        else{
            result = false;break;
        }
    }
    
    
    return result;
}

int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;
    for(int i=0;i<babbling_len;i++){
        if(possible(babbling[i])){
            answer++;
        }
    }

    return answer;
}
