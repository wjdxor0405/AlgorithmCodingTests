#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int day_num(const char * ydm){

    int y = (ydm[2]-48)*10 + (ydm[3]-48);
    int m = (ydm[5]-48)*10 + (ydm[6]-48);
    int d = (ydm[8]-48)*10 + (ydm[9]-48);

    return 28*(12*y+ m) + d;
}

int t(const char * term){
    int i = 2;
    int result = 0;
    while(term[i]){
        result *= 10;
        result += (term[i] - 48);
        i++;
    }

    return result;
}

int* solution(const char* today, const char* terms[], size_t terms_len, const char* privacies[], size_t privacies_len) {

    int today_num = day_num(today);
    int term_a[26]  = {0};
    int* answer = (int*)malloc(privacies_len*sizeof(int));
    int count = 0;


    for(int i=0;i<terms_len;i++){
        term_a[terms[i][0] - 'A'] = t(terms[i]);
    }

    for(int i=0;i<privacies_len;i++){

        if(today_num >= day_num(privacies[i]) + 28*term_a[privacies[i][11] - 'A']){ 
            answer[count] = i+1;
            count++;
        }
    }
    
    return answer;
}