#include<bits/stdc++.h>
using namespace std; 

class Solution{
    vector<int>sortparity(vector<int>&nums){
        int left = 0; 
        int right = nums.size() - 1;
        vector<int>ans(nums.size(),0);
        for(int trace = 0; trace < nums.size(); trace++){
            if(nums[trace] % 2 == 0){
                ans[left] = nums[trace]; 
                left++;
            }else{
                ans[right] = nums[trace];
                right--;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol; 
    vector<int>nums = {}; 
    vector<int>res = sol.sortparity(nums);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}