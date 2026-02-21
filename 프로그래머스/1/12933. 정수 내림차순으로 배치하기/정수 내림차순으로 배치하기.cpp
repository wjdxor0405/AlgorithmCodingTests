#include <string>
// #include <vector>

using namespace std;

long long solution(long long n) {
    if(n%10 == 0){return 10*solution(n/10);}
    long long answer = 0;
    
    while(n)
    {
        long long a = answer;
        long long t = 1;
        while(a){

            if(a % 10 >= n % 10)
            {
                break;
            }
            t *=10;
            a /=10;
        }
        answer = a*t*10 + t*(n % 10) + (answer%t);
        n /= 10;
    }
    
    return answer;
}