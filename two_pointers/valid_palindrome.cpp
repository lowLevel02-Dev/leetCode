#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty() || s.size() == 1){
            return true;
        }
        vector<char>temp;
        for(char c : s){
            if(isalnum(c)){
                temp.push_back(tolower(c));
            }
        }
        int left = 0; 
        int right = temp.size() - 1;
        while(left < right){
            if(temp[left] != temp[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
int main(){
    Solution sol;
    string s = "aba"; 
    bool res = sol.isPalindrome(s);
    cout<<res;
    return 0;
}