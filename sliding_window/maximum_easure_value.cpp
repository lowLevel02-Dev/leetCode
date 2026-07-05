#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>seen; 
        int ans = 0;
        int left = 0; 
        int sum = 0;
        for(int right = 0; right < nums.size(); right++){
            while(seen.count(nums[right])){
                sum-=nums[left]; 
                seen.erase(nums[left]);
                left++;
            }
            sum+=nums[right];
            seen.insert(nums[right]);
            ans = max(sum,ans);
        }
        return ans;
    }
};
int main(){
    Solution sol; 
    vector<int>nums = {}; 
    int res = sol.maximumUniqueSubarray(nums); 
    cout<<res; 
    return 0;
}