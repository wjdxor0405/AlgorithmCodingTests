#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

static int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313};

int solution(int number, int limit, int power) {
    int answer = 1;
    for(int i=2;i<=number;i++){
        int phi = 1;
        int num = i;
        for(int j=0;j<65;j++){
            if(p[j]>num){break;}
            if(phi>limit){break;}
            if(num % p[j] == 0){
                int pow = 0;
                
                 while(num  % p[j] == 0){
                    num /= p[j];
                    pow++;
                }
                phi *= pow + 1;
            }
        }
        if(num > 1){phi *= 2;}
        if(phi>limit){phi = power;}
        answer += phi;

    }
    return answer;
}