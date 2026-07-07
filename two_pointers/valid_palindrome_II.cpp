#include<bits/stdc++.h>
using namespace std; 

class Solution{
public:
    bool isPalindrome(string s, int left, int right){
        while(left < right){
            if(s[left] != s[right]){
                return false; 
            }else{
                left++;
                right--;
            }
        }
        return true;
    }
    bool validPalindrome(string s){
        int left = 0; 
        int right = s.size() - 1;
        while(left < right){
            if(s[left] == s[right]){
                left++;
                right--;
            }else{
                return (isPalindrome(s,left+1,right) || isPalindrome(s,left,right-1));
            }
        }
        return true;
    }
};

int main(){
    Solution sol;
    string s = "abdcba";
    bool res = sol.validPalindrome(s);
    cout<<res;
    return 0;
}