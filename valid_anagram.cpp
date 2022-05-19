#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
//         unordered_map<char, int> s1,s2;

        if(s.length() != t.length()) return false;
        

//      for(int i = 0; i < s.length(); i++){
//          s1[s[i]]++;
//          s2[t[i]]++;
//      }
        
        
//       for(auto letter : s1){
//          if(letter.second != s2[letter.first]) return false;
//       }
        
//       for(auto letter : s2){
//          if(letter.second != s1[letter.first]) return false;
//       }        
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s == t;
    }
};



int main(){
    
    Solution MySolution;
    string s = "anagram", t = "naaaram";
    cout << MySolution.isAnagram(s, t);

    return 0;
}