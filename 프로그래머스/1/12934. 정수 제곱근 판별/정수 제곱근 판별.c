#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = -1;
    long long a = 1;
    long long b = 3535533;//3535533.5
    long long c = 7071067;//7071067.81
    while(c-a){
        if(a*a <= n && n <=b*b)
        {
            if( a*a == n){answer = (a+1)*(a+1);break;}
            else if( b*b == n){answer = (b+1)*(b+1);break;}
            c = b;
            b = (c-a)/2 + a;
            if(b>c || a>b){break;}
        }
        else // (b+1)^2 <= n && n<= c^2
        {
            if( (b+1)*(b+1) == n){answer = (b+2)*(b+2);break;}
            else if( c*c == n){answer = (c+1)*(c+1);break;}
            a = b+1;
            b = (c-a)/2 + a;
            if(a>b || b>c){break;}
        }
    }
    
    return answer;
}