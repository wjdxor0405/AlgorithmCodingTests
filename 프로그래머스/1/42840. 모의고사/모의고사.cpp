#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int s[] = {0,0,0};
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {2, 1, 2, 3, 2, 4, 2, 5};
    int a3[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    for(int i=0;i<answers.size();i++){

        if(answers[i] == a1[i%5]){s[0]+=1;}
        if(answers[i] == a2[i%8]){s[1]+=1;}
        if(answers[i] == a3[i%10]){s[2]+=1;}
    }

    int max_i=0;
    for(int i=0;i<3;i++){
        if(s[i]>s[max_i]){max_i = i;}
    }
    answer.push_back(max_i+1);

    for(int i=max_i+1;i<3;i++){
        if(s[i]==s[max_i]){answer.push_back(i+1);}
    }

    return answer;
}