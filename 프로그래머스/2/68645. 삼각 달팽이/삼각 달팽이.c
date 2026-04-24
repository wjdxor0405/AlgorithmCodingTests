#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)calloc(n * (n+1) / 2, sizeof(int));
    int i=0;
    int j=1;
    int a=0;
    while(i<n){
        for(int k=1;k<=n-i;k++){
            answer[(k+(2*a))*(k-1+(2*a))/2 + a] = j;
            j++;
        }
        i++;
        for(int k=1;k<=n-i;k++){
            answer[(n-a)*(n-1-a)/2 + k + a] = j;
            j++;
        }
        i++;
        for(int k=1;k<=n-i;k++){
            answer[(n-k+1 -(a))*(n-k -(a))/2 -1-a] = j;
            j++;
        }
        i++;
        a++;
    }
    return answer;
}