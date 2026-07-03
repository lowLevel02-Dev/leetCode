#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>seen;
        seen[0] = -1; 
        int prefixSum = 0;
        for(int i = 0; i < nums.size(); i++){
            prefixSum = prefixSum + nums[i];
            int rem = prefixSum % k; 
            if(rem < 0){
                rem = rem + k; 
            }
            if(seen.count(rem)){
                if(i - seen[rem] >=2){
                    return true;
                }
            }else{
                seen[rem] = i;
            }
        }
        return false;        
    }
};

int main(){
    vector<int>nums = {23,2,4,6,6};
    int k = 7;
    Solution sol; 
    bool res = sol.checkSubarraySum(nums,k);
    cout<<res;
    return 0;
}
