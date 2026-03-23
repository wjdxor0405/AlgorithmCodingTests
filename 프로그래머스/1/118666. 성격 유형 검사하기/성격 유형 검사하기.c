#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    int R= 0, T = 0;
    int C= 0, F = 0;
    int J= 0, M = 0;
    int A= 0 , N = 0;

    for(int i=0;i<survey_len;i++){
        switch(survey[i][0]){
            case 'R':
                R += choices[i];
                T += 8 - choices[i];
                break;
            case 'T':
                T += choices[i];
                R += 8 - choices[i];
                break;
            case 'C':
                C += choices[i];
                F += 8 - choices[i];
                break;
            case 'F':
                F += choices[i];
                C += 8 - choices[i];
                break;
            case 'J':
                J += choices[i];
                M += 8 - choices[i];
                break;
            case 'M':
                M += choices[i];
                J += 8 - choices[i];
                break;
            case 'A':
                A += choices[i];
                N += 8 - choices[i];
                break;
            case 'N':
                N += choices[i];
                A += 8 - choices[i];
                break;
            default:
                continue;
        }
    }
    
    
    char* answer = (char*)malloc(5*sizeof(char));
    answer[0] = R > T ? 'T' : 'R';
    answer[1] = C > F ? 'F' : 'C';
    answer[2] = J > M ? 'M' : 'J';
    answer[3] = A > N ? 'N' : 'A';
    answer[4] = '\0';

    return answer;
}
