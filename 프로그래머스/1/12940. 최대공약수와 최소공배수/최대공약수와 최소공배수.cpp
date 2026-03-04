#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;

    int a = n;
    int b = m;
    if(n<m){a = m;b=n;}
    int r = a%b;
    
    while(r){
        if(b>r){a = b;b=r;}
        else{a=r;}

        r = a%b;     
    }
    
    answer.push_back(b);
    answer.push_back(b*(m/b)*(n/b));
    
    return answer;

}