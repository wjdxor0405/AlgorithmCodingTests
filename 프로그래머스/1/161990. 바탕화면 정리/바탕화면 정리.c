#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* wallpaper[], size_t wallpaper_len) {
    int* answer = (int*)malloc(4*sizeof(int));
    answer[0] = 50;
    answer[1] = 50;
    answer[2] = 0;
    answer[3] = 0;
    for(int i=0;i<wallpaper_len;i++){
        int j=0;
        while(wallpaper[i][j]){
            if(wallpaper[i][j] == '#'){
                if(i < answer[0]){answer[0] = i;}
                if(j < answer[1]){answer[1] = j;}
                if(i > answer[2]){answer[2] = i;}
                if(j > answer[3]){answer[3] = j;}
            }
            j++;
        }
    }
    answer[2] += 1;
    answer[3] += 1;
    
    return answer;
}