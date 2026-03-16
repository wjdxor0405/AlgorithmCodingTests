#include <vector>
#include <iostream>
using namespace std;


bool isprime(int target){
    int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    bool result = true;
    for(int i=0;i<16;i++){
        if(target == p[i]){break;}
        else if(target % p[i] == 0){result = false;break;}
    }
    return result;
}

int solution(vector<int> nums) {
    int answer = 0;

    for(int i=0;i<nums.size()-2;i++){
        for(int j=i+1;j<nums.size()-1;j++){
            for(int k=j+1;k<nums.size();k++){
                int target = nums[i]+nums[j]+nums[k];
                if(isprime(target)){answer++;}
            }
        }
    }

    return answer;
}
