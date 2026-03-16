#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int result(int m, int section[], int start, int end){
    if(section[end] - section[start] < m){
        return 1;
    }
    else{
        //section[s] ~ section[s + section_len - 1]
        int l = start;
        while(section[l]-section[start] + 1 <= m){l++;}
        l--;

        int r = end;
        while(section[end]-section[r] + 1 <= m){r--;}
        r++;

        if(section[l]-section[start] > section[end]-section[r]){
            return result(m, section, l+1, end) + 1;
        }
        else{
            return result(m, section, start, r-1) + 1;
        }

    }
}


int solution(int n, int m, int section[], size_t section_len) {
    return result(m, section, 0, section_len-1);
}