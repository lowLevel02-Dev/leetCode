#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prod = 1;
        int left = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            prod *= nums[i];
            while (prod >= k) {
                prod = prod / nums[left];
                left++;
            }
            count += i - left + 1;
        }
        return count;
    }
};
int main(){
    vector<int>nums = {}; 
    Solution sol; 
    int k = 100;
    int res = sol.numSubarrayProductLessThanK(nums,k);
    cout<<res;
    return 0;
}