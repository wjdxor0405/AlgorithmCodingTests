#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    for(int i=0;i<strings.size();i++){
        int j=0;
        for(;j<answer.size();j++){
            if(strings[i][n] < answer[j][n]){
                break;
            }
            else if(strings[i][n] == answer[j][n]){
                int k=0;
                bool t = false;
                while(strings[i][k] && strings[j][k]){
                    if(strings[i][k] == answer[j][k]){}
                    else if(strings[i][k] > answer[j][k]){break;}
                    else if(strings[i][k] < answer[j][k]){t = true;break;}
                    k++;
                }
                if(t){break;}
            }
        }
        answer.insert(answer.begin()+j, strings[i]);
    }
    return answer;
}