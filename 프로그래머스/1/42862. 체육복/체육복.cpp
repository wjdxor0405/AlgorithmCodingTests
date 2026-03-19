#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {

    int student[32];
    student[0] = 0;
    student[n+1] = 0;

    for(int i=1;i<=n;i++){student[i] = 1;}
    for(int i=0;i<lost.size();i++){student[lost[i]] = 0;}
    for(int i=0;i<reserve.size();i++){student[reserve[i]] += 1;}

    int answer = 0;
    for(int i=1;i<=n;i++){
        if(student[i]>0){answer++;}
        else if(student[i-1] == 2){answer++;}
        else if(student[i+1] == 2){answer++;student[i+1] =1;}
    }
        
    return answer;
}
