#include<iostream>
#include<string>
#include<vector>
using namespace std; 
class Solution{
public:
    int charecterReplacement(string &s, int k){
        vector<int>freq (26,0);
        int left = 0, sum = 0; 
        int maxfreq = 0; 
        for(int right = 0; right < s.size(); right++){
            freq[s[right] - 'A']++;

            maxfreq = max(maxfreq , freq[s[right] - 'A']);
            while((right - left + 1) - maxfreq > k){
                freq[s[left] - 'A']--;
                left++;
            }
            sum = max(sum, right - left +1);
        }
        return sum;
    }
};
int main(){
    Solution sol;
    string s = "ABAB"; 
    int k = 2; 
    int res = sol.charecterReplacement(s,k);
    cout<<res; 
    return 0;
}