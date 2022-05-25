#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.length() - 1;
        while(end >= start){
            if(!isAlphanumeric(s[start])){
                start++;
                if(!isAlphanumeric(s[end])){
                    end--;
                }
            } else{
                if(!isAlphanumeric(s[end])){
                    end--;
                } else{
                    if(tolower(s[start])!= tolower(s[end])) return false;
                    start++;
                    end--;
                }
            }
        }
        
        return true;
        
    }
    
    bool isAlphanumeric(char c){
        return ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122));
    }

};

int main(){
    Solution mySolution;
    string s = "A man, nam:pa";
    cout << mySolution.isPalindrome(s);
}