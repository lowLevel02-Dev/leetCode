#include<bits/stdc++.h>
using namespace std; 
class Solution{
public:
    int boats(vector<int> &nums, int limits){
        int right = nums.size() -1; 
        int left = 0; 
        int boats = 0; 
        while(left < right){
            boats++;
            int sum = nums[left] + nums[right]; 
            if(sum <= limit){
                left++;
            }
            right--;
        }
        return boats;
    }
};

int main(){
    vector<int>nums = {};
    int limits = 5;
    Solution sol; 
    int res = sol.boats(nums);
    cout<<res; 
    return 0;
}

