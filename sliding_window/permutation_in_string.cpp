#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<string>
using namespace std; 

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        int left = 0;
        for(char c : s1){
            freq1[c - 'a']++;
        }    
        for (int i = 0; i < s1.size(); i++)
            freq2[s2[i] - 'a']++;
        if(freq1 == freq2){
            return true;
        }
        for(int right = s1.size(); right < s2.size(); right++){
            freq2[s2[right] - 'a']++;
            freq2[s2[left] - 'a']--;
            left++;
            if(freq1 == freq2){
                return true;
            }
        }
        return false;
    }
};

int main(){
    string s1 = "ab";   
    string s2 = "eidbaooo";
    Solution sol;
    bool res = sol.checkInclusion(s1,s2);
    cout<<res;
    return 0;
}