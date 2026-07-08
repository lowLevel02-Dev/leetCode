#include<bits/stdc++.h>
using namespace std; 

class Solution{
public:
    void sortcolors(vector<int>&nums){
        int left = 0; 
        int mid = 0; 
        int right = nums.size() - 1; 
        while(mid <= right){
            if(nums[mid] == 0){
                swap(nums[left], nums[mid]);
                left++; 
                mid++;
            }else if(mid == 1){
                mid++;
            }else{
                swap(nums[right],nums[mid]);
                right--;
            }
        }
    }
};

int main(){
    Solution sol; 
    vector<int>nums = {2,0,1}; 
    sol.sortcolors(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}