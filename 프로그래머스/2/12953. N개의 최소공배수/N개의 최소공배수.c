#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b){
    int r;
    if(a < b){
        r = b;
        b = a;
        a = r;
    }
    r = a % b;
    if(r == 0)return b;
    
    return gcd(b, r);
}


int lcm(int a, int b){
    int g = gcd(a,b);
    return a*b/g;
}

int solution(int arr[], size_t arr_len) {
    int answer = arr[0];

    for(int i=1;i<arr_len;i++){
        answer = lcm(answer, arr[i]);
    }

    return answer;
}
