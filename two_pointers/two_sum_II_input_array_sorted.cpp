#include<bits/stdc++.h>
using namespace std; 

class Solution{
public:
    vector<int>twoSumSorted(vector<int>&nums , int target){
        vector<int>ans; 
        int right = nums.size() - 1; 
        int left = 0; 
        while(left < right){
            int sum = nums[left] + nums[right];
            if(sum == target){
                ans.push_back(left+1);
                ans.push_back(right+1);
            }
            if(sum > target){
                right--;
            }else{
                left--;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol; 
    vector<int>nums = {0,2,1};
    int target = 1;
    vector<int>res = sol.twoSumSorted(nums,target);
    for(int i =0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}