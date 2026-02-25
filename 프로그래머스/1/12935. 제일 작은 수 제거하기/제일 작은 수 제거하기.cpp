#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    if(arr.size() <=1){return {-1};}
    int min = 2147483647;
    int min_indx = 0;

    for(int i=0;i<arr.size();i++)
    {
        if(min>arr[i]){        
            min = arr[i];
            min_indx = i;
        }
    }
    arr.erase(arr.begin() + min_indx);
    vector<int> answer = arr;
    return answer;
}