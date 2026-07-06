#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>frequency;
        int left = 0, sum = 0; 
        for(int right = 0; right < nums.size(); right++){
            frequency[nums[right]]++; 
            while(frequency[nums[right]] > k){
                frequency[nums[left]]--; 
                left++;
            }
            sum = max(sum, right - left + 1);
        }
        return sum;
    }
};

int main(){
    vector<int>nums = {1,2,3,1,2,3,1,2}; 
    int k = 2; 
    Solution sol; 
    int res = sol.maxSubarrayLength(nums,k);
    cout<<res; 
    return 0;
}