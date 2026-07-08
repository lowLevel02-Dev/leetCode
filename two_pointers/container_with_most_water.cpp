#include<bits/stdc++.h>
using namespace std; 

class Solution{
public:
    int maxwatercontainer(vector<int>&nums){
        int left = 0; 
        int right = nums.size() - 1; 
        int max_water = 0; 
        while(left < right){
            int area = (right - left) * min(nums[left] , nums[right]);
            max_water = max(max_water,area);
            if(nums[left] > nums[right]){
                right--;
            }else{
                left++;
            }
        }
        return max_water;
    }
};

int main(){
    Solution sol; 
    vector<int>nums = {1,8,6,2,5,4,8,3,7}; 
    int res = sol.maxwatercontainer(nums);
    cout<<res;
    return 0;
}