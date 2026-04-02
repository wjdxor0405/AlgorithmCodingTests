#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void update(int ** a, int pos, int t, int *c, int *max, int **counts){

    if(t == 0){
        counts[0][a[0][pos + 3]] -= 1;
        a[0][pos + 3] += 1;
        counts[0][a[0][pos + 3]] += 1;

        if(max[0] < a[0][pos + 3]){max[0]  = a[0][pos + 3];}

        return;
    }
    int index = t % 2;
        
    int next_pos;
    if(a[0][pos + index] == 0){
        
        c[0] += 1;
        a[0][pos + index] = 4*c[0];
        next_pos = a[0][pos + index];

        for(int i=0;i<4;i++){a[0][next_pos + i] = 0;}
    }
    else{
        next_pos = a[0][pos + index];
    }
    
    update(a, next_pos, t/2, c, max, counts);
}


int solution(int k, int tangerine[], size_t tangerine_len) {

    int * a[1];
    a[0] = (int *)malloc(4*24*tangerine_len*sizeof(int));
    for(int i=0;i<4;i++){a[0][i] = 0;}
    
    int * counts[1];
    counts[0] = (int *)malloc(tangerine_len*sizeof(int));
    for(int i=1;i<tangerine_len;i++){counts[0][i] = 0;}
    counts[0][0] = tangerine_len;

    int answer = 0;
    int c[1] = {0};
    int max[1] = {0};

    for(int i=0;i<tangerine_len;i++){
        update(a,0,tangerine[i], c, max, counts);
    }

    free(a[0]);

    int sum = 0;
    for(int i=max[0];i>=0;i--){

        if(counts[0][i]>0){
            for(int j=0;j<counts[0][i];j++){
                sum += i;
                answer++;
                if(sum >= k){break;}
            }
            if(sum >= k){break;}
        }
    }

    free(counts[0]);
    return answer;
}
