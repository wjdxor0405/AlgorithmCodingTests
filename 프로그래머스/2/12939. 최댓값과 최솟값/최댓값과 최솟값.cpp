#include <string>
#include <vector>

using namespace std;

int compare(string & a, string & b){
    // a == b : 0
    // a > b : 1
    // a < b : -1

    bool negative = false;
    int result = 0;
    if(a[0] != '-' && b[0] == '-' ){
        
        return 1;
    }
    else if(a[0] == '-' && b[0] != '-' ){
    
        return -1;
    
    }
    else if(a[0] == '-' && b[0] == '-' ){

        negative = true;
    }
    
    if(a.size()>b.size()){result = 1;}
    else if(a.size()<b.size()){result = -1;}
    else{
        int len = a.size();
        for(int i = 0;i<len;i++){
            if(a[i] > b[i]){
                result = 1;
                break;
            }
            else if(a[i] < b[i]){
                result = -1;
                break;
            }
        }

    }

    if(negative){result *= -1;}
    
    return result;
}

string solution(string s) {
    string answer = "";
    bool negative = false;
    int len = s.size();

    int first_space= 0;;
    for(;first_space<len;first_space++){if(s[first_space] == ' '){break;}}
    string min = s.substr(0, first_space);
    string max = s.substr(0, first_space);

    int pre_space = first_space;
    for(int i=first_space+1;i<len;i++){
        if(s[i] == ' '){
            string target = s.substr(pre_space + 1, i - pre_space-1);
            if(compare(min, target) > 0 ){min = target;}
            if(compare(max, target) < 0 ){max = target;}

            pre_space = i;
        }
    }
    string target = s.substr(pre_space + 1, len - pre_space-1);
    if(compare(min, target) > 0 ){min = target;}
    if(compare(max, target) < 0 ){max = target;}
    

    return min + " " + max;
}