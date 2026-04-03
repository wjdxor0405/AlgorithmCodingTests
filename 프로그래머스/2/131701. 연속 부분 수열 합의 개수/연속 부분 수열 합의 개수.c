#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int sum(int elements[], size_t elements_len, int start_index, int len){
    int result = 0;
    for(int i=0;i<len;i++){
        result += elements[(start_index + i)%elements_len];
    }

    return result;
}

int solution(int elements[], size_t elements_len) {

    
    int s = sum(elements, elements_len, 0, elements_len);
    int answer = 1;

    bool * a = (bool *)malloc(s*sizeof(bool));
    for(int i=0;i<s;i++){a[i] = false;}

    for(int n=1;n<elements_len;n++){
        for(int i=0;i<elements_len;i++){
            s = sum(elements, elements_len, i, n);
            if(!a[s]){
                a[s] = true;
                // printf("s=%d\n",s);
                answer++;
            }
        }
    }
    free(a);
    return answer;
}
