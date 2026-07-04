#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < k){
            return (float)0;
        }
        double sum = 0;
        for(int i =0; i < k; i++){  
            sum+=nums[i];
        }   
        double windowSum = sum; 
        for(int i = k; i < n; i++){
            windowSum += nums[i] - nums[i-k];
            sum = max(sum,windowSum);
        }
        return sum/k;
    }
};
int main(){
    vector<int>nums ={1,12,-5,-6,50,3};
    int k = 4; 
    Solution sol;
    double res = sol.findMaxAverage(nums,k);
    cout<<res;
    return 0;
}