#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std; 

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>freq; 
        for(int i =0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                freq[nums[i]*nums[j]]++;
            }
        }
        int sum = 0;
        for(auto &p : freq){
            int f = p.second; 
            if(f >= 2){
                sum += (f*(f-1)/2)*8;
            }
        }
        return sum;    
    }
};

int main(){
    vector<int> nums = {2,3,4,6};
    Solution sol; 
    int ans = sol.tupleSameProduct(nums);
    cout<<ans;
    return 0;
}