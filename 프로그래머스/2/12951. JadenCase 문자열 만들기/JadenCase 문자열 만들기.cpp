#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    // string answer = "";
    // return answer;

    bool alphabet = false;
    for(int i=0;i<s.size();i++){
        if('a' <= s[i] && s[i] <= 'z'){
            if(!alphabet){
                s[i] += 'A' - 'a'; 
            }
            alphabet = true;
        }
        else if('A' <= s[i] && s[i] <= 'Z'){
            if(alphabet){
                s[i] += 'a' - 'A';
            }
            alphabet = true;
        }
        else if('0' <= s[i] && s[i] <= '9'){
            alphabet = true;
        }
        else{
            alphabet = false;
        }

    }
    return s;
}