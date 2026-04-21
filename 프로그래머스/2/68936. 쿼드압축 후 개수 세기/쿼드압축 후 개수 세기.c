#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool check_same(int** arr, int i0, int j0, int len){

    int t = arr[i0][j0];
    bool result = true;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){

            if(t != arr[i0+i][j0+j]){
                result = false;
                break;
            }
        }
        if(!result){break;}
    }

    if(result){
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                arr[i0+i][j0+j] = -1;
                
            }
        }
    }
    
    return result;
}


int* solution(int** arr, size_t arr_rows, size_t arr_cols) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = 0, answer[1] = 0;

    int len = arr_rows;
    while(len){

        for(int i=0;i<arr_rows;i += len){
            for(int j=0;j<arr_cols;j += len){
                if(arr[i][j]>=0){
                    int t = arr[i][j];
                    if(check_same(arr, i,j, len)){
                        answer[t] +=1;
                    }
                }
            }
        }

        len /= 2;
    }

    return answer;
}