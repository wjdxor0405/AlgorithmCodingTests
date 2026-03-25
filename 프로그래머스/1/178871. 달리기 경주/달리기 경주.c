#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define M 32

void set_rank(int ** array, int current_pos, char * name, int char_pos, int * count, int rank){
    // int nwe_pos = count[0]*32;
    
    // array[current_pos]; 
    // current_pos + 0 ~ 26
    // current_pos + M + 0 ~ 26

    // printf("(current_pos=%d)\n",current_pos);

    char c = name[char_pos];
    if(!c){
        array[0][current_pos + 27] = rank;
        return;
    }
    // printf("(c=%c)\n", c);


    int index = c - 'a';
    int next_pos;
    if(array[0][current_pos + index] == 0){
        count[0] += 1;
        next_pos = count[0]*M;
        array[0][current_pos + index] = next_pos;
        for(int i=0;i<26;i++){
            array[0][next_pos + i] = 0;
        }
    }
    else{
        next_pos = array[0][current_pos + index];
    }

    // printf("(next_pos=%d)\n",next_pos);


    set_rank(array, next_pos, name, char_pos + 1, count, rank);

}

int get_rank(int ** array, int current_pos, char * name, int char_pos){
    // printf("((get)current_pos=%d)\n",current_pos);

    char c = name[char_pos];
    if(!c){
        return array[0][current_pos + 27];
    }

    // printf("((get)c=%c)\n", c);
    // printf("");


    int index = c - 'a';
    int next_pos = array[0][current_pos + index];

    // printf("((get)next_pos=%d)\n",next_pos);

    return get_rank(array, next_pos, name, char_pos + 1);

}

char** solution(const char* players[], size_t players_len, const char* callings[], size_t callings_len) {

    int * array[1];
    array[0] = (int *)malloc(players_len*sizeof(int)*32*10);
    // printf("len = %d\n", players_len*sizeof(int)*32*10);
    // int array[1][6400];


    for(int i=0;i<26;i++){
        array[0][i] = 0;
    }
    int count[1];
    count[0] = 0;

    char** answer = (char**)malloc(players_len*sizeof(char *));    
    for(int i = 0;i<players_len;i++){
        answer[i] = (char *)players[i];
        set_rank((int **)array, 0, answer[i], 0, count, i);
    }

    
    for(int i=0;i<players_len;i++){
        int rank = get_rank((int **)array, 0, answer[i], 0);
        // printf("%s (rank = %d)\n", answer[i], rank);
    }
    
    for(int i=0;i<callings_len;i++){
        int rank = get_rank((int **)array, 0, (char *)callings[i], 0);
        char * tmp = answer[rank];
        answer[rank] = answer[rank - 1];
        answer[rank - 1] = tmp;
        set_rank((int **)array, 0, answer[rank], 0, count, rank);
        set_rank((int **)array, 0, answer[rank -1], 0, count, rank -1);
    }


    // free(array[0]);
    return answer;
}
