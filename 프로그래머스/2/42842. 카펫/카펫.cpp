#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    int sum = brown/2 - 2;
    int diff_sq = sum*sum - 4*yellow;

    int diff=0;
    for(;diff*diff<diff_sq;diff++){}
    answer.push_back((sum + diff)/2 + 2);
    answer.push_back((sum - diff)/2 + 2);

    return answer;
}