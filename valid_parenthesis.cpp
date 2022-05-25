#include <iostream>
#include <string>
#include <stack>


using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            stack<char> brackets;
            
            for(int i = 0; i < s.length(); i++){
                switch (s[i]){
                    case '{':
                        brackets.push(s[i]);
                        break;
                    case '}':
                        if(!brackets.empty() && brackets.top() == '{') brackets.pop();
                        else return false;
                        break;
                    case '(':
                        brackets.push(s[i]);
                        break;
                    case ')':
                        if(!brackets.empty() && brackets.top() == '(') brackets.pop();
                        else return false;
                        break;
                    case '[':
                        brackets.push(s[i]);
                        break;
                    case ']':
                        if(!brackets.empty() && brackets.top() == '[') brackets.pop();
                        else return false;
                        break;
                }
            }
            
            if(!brackets.empty()) return false;
            
            return true;
            
        }
};


int main(){
    Solution mySolution;
    cout << mySolution.isValid("({[]}{[()]})");
}