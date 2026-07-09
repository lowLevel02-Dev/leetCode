#include<bits/stdc++.h>
using namespace std; 
class Solution{
public:
    int removeDuplicate(vector<int> &nums){
        if(nums.size() <= 2){
            return nums.size();
        }
        int write = 2;
        for(int fast = 2; fast < nums.size(); fast++){
            if(nums[fast] != nums[write - 2]){
                nums[write] = nums[fast];
                write++;
            }
        }
        return write;
    }
};

int main(){
    vector<int>nums = {1,1,1,2,2,2,3};
    Solution sol; 
    int res = sol.removeDuplicate(nums);
    cout<<res; 
    return 0;
}