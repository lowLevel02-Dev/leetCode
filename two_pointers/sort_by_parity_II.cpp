#include<bits/stdc++.h>
using namespace std; 

class Solution{
public:
    vector<int> sortparity(vector<int>&nums){
        int left = 0; 
        int right = 1;
        vector<int>ans(nums.size(),0);
        for(int trace = 0; trace < nums.size(); trace++){
            if(nums[trace] % 2 == 0){
                ans[left] = nums[trace]; 
                left = left + 2;
            }else{
                ans[right] = nums[trace];
                right = right + 2;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol; 
    vector<int>nums = {4,2,5,7}; 
    vector<int>res = sol.sortparity(nums);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}