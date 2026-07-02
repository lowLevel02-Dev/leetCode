#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>seen(nums.begin(), nums.end());
        
        int longest = 0; 
        for(int num : seen){
            if(!seen.count(num -1)){
                int current = num; 
                int length = 1; 
                while(seen.count(current+1)){
                    current++;
                    length++; 
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};

int main(){
    vector<int> nums = {100,4,200,1,3,2};
    Solution sol; 
    int res = sol.longestConsecutive(nums);
    cout<<res;
    return 0;
}