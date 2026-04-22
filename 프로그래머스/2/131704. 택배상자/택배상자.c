#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int order[], size_t order_len) {
    int answer = 0;
    int * cont2 = (int *)malloc(order_len*sizeof(int));
    int con2_idx = -1;

    int con = 0;
    int order_idx = 0;
    int i=1;
    while(1){

        if(con2_idx >=0 && cont2[con2_idx] == order[order_idx]){
            answer++;
            order_idx++;
            con2_idx--;
        }
        else if(i == order[order_idx]){
            answer++;
            order_idx++;
            i++;
        }
        else if(i < order[order_idx]){
            con2_idx++;
            cont2[con2_idx] = i;
            i++;
        }
        else{
            break;
        }
    }

    free(cont2);
    return answer;
}