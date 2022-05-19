#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> unique_nums;
        
        for(auto n : nums){
            if(unique_nums.find(n) == unique_nums.end()){
                unique_nums[n] = n;
            } else{
                return true;
            }
        }
        return false;
    }
};


int main(){
    
    Solution MySolution;
    vector<int> nums = {1, 2, 3, 10};
    cout << MySolution.containsDuplicate(nums);

    return 0;
}