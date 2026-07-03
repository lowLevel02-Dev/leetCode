#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std; 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefixCount;
        prefixCount[0] = 1;
        int prefix = 0; 
        int count = 0; 

        for(int num : nums){
            prefix = prefix + num;
            if(prefixCount.find(prefix - k) != prefixCount.end()){
                count = count + prefixCount[prefix - k];
            }
            prefixCount[prefix]++;
        }
        return count;
    }
};

int main(){
    Solution sol; 
    vector<int> nums = {0,1,2,3};
    int k = 3; 
    int res = sol.subarraySum(nums,k);
    cout<<res;
    return 0;
}