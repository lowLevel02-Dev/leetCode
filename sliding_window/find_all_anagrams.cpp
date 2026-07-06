#include<iostream>
#include<vector>
#include<string>
using namespace std; 

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        if(p.size() > s.size()){
            return res;
        }
        vector<int>freqs(26,0);
        vector<int>freqp(26,0);
        for(char c : p){
            freqp[c - 'a']++;
        }
        for(int i = 0; i < p.size() ; i++){
            freqs[s[i] - 'a']++;
        }
        if(freqp == freqs)
            res.push_back(0);
        int left = 0; 
        for(int right = p.size(); right < s.size(); right++){
            freqs[s[right] - 'a']++;
            freqs[s[left] - 'a']--;
            left++;
            if(freqp == freqs){
                res.push_back(left);
            }
        }
        return res;
    }
};

int main(){
    Solution sol;
    string s = "cbaebabacd"; 
    string p = "abc";
    vector<int>result=sol.findAnagrams(s,p); 
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}