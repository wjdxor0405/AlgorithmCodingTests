#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int d = a;
    if(a>b){}
    else{ a = b; b = d;}
    d = a - b;
    for(;d>0;answer++){
        a = (a+1)/2; b = (b+1)/2;
        d = a - b;
    }

    return answer;
}
