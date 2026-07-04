#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int k = INT_MAX;
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            while (sum >= target) {

                k = min(k, i - j + 1);

                sum -= nums[j];
                j++;
            }
        }

        return k == INT_MAX ? 0 : k;
    }
};

int main(){
    vector<int>nums = {}; 
    int target = 7; 
    Solution sol; 
    int res = sol.minSubArrayLen(target,nums);
    cout<<res;
    return 0;
}
