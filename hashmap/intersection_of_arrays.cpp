#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res = {};
        if(nums1.empty() || nums2.empty()){
            return res;
        }
        unordered_set<int>seen;
        for(int i = 0; i < nums1.size(); i++){
            if(!seen.count(nums1[i])){
                seen.insert(nums1[i]);
            }
        }
        for(int i=0; i <nums2.size();i++){
            if(seen.count(nums2[i])){
                res.push_back(nums2[i]);
                seen.erase(nums2[i]);
            }
        }
        return res;
    }
};

int main(){
    vector<int>nums1 = {1,2,2,3,5};
    vector<int>nums2 = {2,2,2,3};
    Solution sol; 
    vector<int>res = sol.intersection(nums1,nums2);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<",";
    }
    return 0;
}