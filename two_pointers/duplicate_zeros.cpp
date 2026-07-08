#include<bits/stdc++.h>
using namespace std; 

class Solution{
public:
    vector<int> duplicatezeros(vector<int>&nums){
        int pos = 0;
        vector<int>ans(nums.size(),0);
        for(int i = 0; i < nums.size(); i++){
            if(pos == ans.size()){
                break;
            }
            if(nums[i] == 0){
                ans[pos] = 0;
                pos++; 
                if(pos < ans.size()){
                    ans[pos] = 0;
                    pos++;
                }
            }else{
                ans[pos] = nums[i];
                pos++;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol; 
    vector<int>nums = {1,0,2,3,0,4,5,0}; 
    vector<int>res = sol.duplicatezeros(nums);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}