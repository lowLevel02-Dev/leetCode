#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution{
public:
    int findMaxSliding(vector<int>&nums,int k){
        int n = nums.size();
        if(n < k){
            return 0;
        }
        int sum =0;
        for(int i = 0; i < k; i++){
            sum+=nums[i];
        }
        int windowSum = sum;
        for(int i = k; i < n; i++){
            windowSum += nums[i] - nums[i - k];
            sum = max(windowSum,sum);
        } 
        return sum;
    }
};

int main(){
    vector<int>nums = {5, 2};
    int k = 3; 
    Solution sol; 
    int res = sol.findMaxSliding(nums,k);
    cout<<res; 
    return 0;
}