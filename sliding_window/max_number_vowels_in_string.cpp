#include<iostream>
#include<vector>
#include<climits>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>seen;
        seen.insert({'a','e','i','u'});
        int ans =0;
        for(int i=0; i < k; i++){
            if(seen.count(s[i])){
                ans++;
            }
        }
        int count = ans; 
        for(int i = k; i < s.size(); i++){
            if(seen.count(s[i-k])){
                count--;
            }
            if(seen.count(s[i])){
                count++;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};
int main(){
    string s = "aeiou"; 
    Solution sol;
    int k = 2;
    int res = sol.maxVowels(s,k);
    cout<<res;
    return 0;
}