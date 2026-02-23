#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer = {};

    if(arr.size() == 0){return {-1};}

    if(arr[0] % divisor == 0){answer.push_back(arr[0]);}

    for(int i=1;i < arr.size();i++){
        if(arr[i] % divisor == 0){
            int len = answer.size();
            int j=0;
            for(j=0;j<len;j++){
                if(arr[i] <= answer[j]){
                    break;
                }
            }
            answer.emplace(answer.begin() + j, arr[i]);

        }
    }

    if(answer.size() == 0){return {-1};}
    return answer;

}