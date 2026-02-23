#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    int i=0;
    int size = seoul.size();
    for(i=0;i<size;i++){
        if(seoul[i] == "Kim")
        {
            answer += to_string(i);
            break;
        }
    }
    answer += "에 있다";
    
    return answer;
}