#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool ham(int * ingrediendt, int index){
    if(index < 3){return false;}
    else if(ingrediendt[index-3] == 1 &&
        ingrediendt[index-2] == 2 &&
        ingrediendt[index-1] == 3 &&
        ingrediendt[index] == 1
    ){
        return true;
    }
    return false;
}

int solution(int ingredient[], size_t ingredient_len) {    
    int answer = 0;
    int p = 3;
    for(int i=3;i<ingredient_len;i++){

        ingredient[p] = ingredient[i];
        if(ham(ingredient, p)){
            answer++;
            p -= 3;
        }
        else{
            p++;
        }

    }

    return answer;
}
