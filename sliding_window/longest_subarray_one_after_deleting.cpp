#include<iostream>
#include<vector>
using namespace std; 
class Solution{
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0; 
        int sum = 0;
        int zero =0;
        for(int right = 0; right<nums.size(); right++){
            if(nums[right] == 0){
                zero++;
            }
            while(zero > 1){
                if(nums[left] == 0){
                    zero--;
                }
                left++;
            }
            sum = max(sum, right - left + 1);
        }
        return sum - 1;
    }
};
int main(){
    vector<int>nums = {};
    Solution sol; 
    int res = sol.longestSubarray(nums);
    cout<<res;
    return 0;
}