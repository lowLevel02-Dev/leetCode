#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res; 
        unordered_map<int,int>frequent;
        for(int i : nums){
            frequent[i]++;
        }
        vector<pair<int,int>>temp;
        for(auto &p : frequent){
            temp.push_back({p.second,p.first});
        }
        sort(temp.begin(),temp.end(),greater<pair<int,int>>());
        for(int i = 0; i < k; i++){
            res.push_back(temp[i].second);
        }
        return res;
    }
};

int main(){
    vector<int>nums = {1,2,1,2,1,2,3,1,3,2};
    int k = 2;
    Solution sol; 
    vector<int> res = sol.topKFrequent(nums,k);
    for(int i =0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}