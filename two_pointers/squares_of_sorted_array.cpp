#include<bits/stdc++.h>
using namespace std; 

class Solution{ 
public:
    vector<int>squaresSorted(vector<int>&nums){ 
        int left = 0; 
        int right = nums.size() - 1; 
        int pos = right;
        vector<int>ans(nums.size(),0); 
        while(left <= right){
            int sqleft = nums[left]*nums[left]; 
            int sqright = nums[right]*nums[right];
            if(sqleft > sqright){
                ans[pos] = sqleft; 
                left++;
            }else{
                ans[pos] = sqright;
                right--;
            }
            pos--;
        }
        return ans;
    }
};

int main(){
    Solution sol; 
    vector<int>nums = {-4,-1,0,3,10}; 
    vector<int>res = sol.squaresSorted(nums);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<< " ";
    }
    return 0;
}