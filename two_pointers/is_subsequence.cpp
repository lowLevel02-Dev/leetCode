#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isSubsequence(string s, string t){
        int left = 0; 
        for(int right = 0; right < t.size(); right++){
            if(s[left] == t[right]){
                left++;
                if(left == s.size()){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Solution sol; 
    string s = "abc"; 
    string t = "ahbgd";
    bool res = sol.isSubsequence(s,t);
    cout<<res; 
    return 0;
}