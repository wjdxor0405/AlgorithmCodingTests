#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* park[], size_t park_len, const char* routes[], size_t routes_len) {
    int j_len = 0;
    while(1){
        if(park[0][j_len] == 'S'|| park[0][j_len] == 'X' || park[0][j_len] == 'O'){
            j_len++;
        }else{
            break;
        }
    }

    // while(park[0][j_len]){
    //     j_len++;
    // }



    int i=0, j=0;
    for(i=0;i<park_len;i++){
        for(j=0;j<j_len;j++){
            if(park[i][j] == 'S'){break;}
        }
        if(park[i][j] == 'S'){break;}
    }

    for(int k=0;k<routes_len;k++){
        char d = routes[k][0];
        int n = routes[k][2] - 48;
        bool move = true;

        if(d == 'E'){
            if(j + n < j_len){
                for(int l=1;l<=n;l++){
                    if(park[i][j + l] == 'X'){
                        move = false;break;
                    }
                }
                if(move){j += n;}
            }
        }
        else if(d == 'W'){
            if(j - n >= 0){
                for(int l=1;l<=n;l++){
                    if(park[i][j - l] == 'X'){
                        move = false;break;
                    }
                }
                if(move){j -= n;}
            }
        }
        else if(d == 'S'){
            if(i + n < park_len){
                for(int l=1;l<=n;l++){
                    if(park[i + l][j] == 'X'){
                        move = false;break;
                    }
                }
                if(move){i += n;}
            }
        }
        else if(d == 'N'){
            if(i - n >=0 ){
                for(int l=1;l<=n;l++){
                    if(park[i - l][j] == 'X'){
                        move = false;break;
                    }
                }
                if(move){i -= n;}
            }
        }


    }
    int* answer = (int*)malloc(2*sizeof(int));
    answer[0] = i;
    answer[1] = j;
    return answer;
}
