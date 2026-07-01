#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;

        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.size(); right++) {

            while (seen.count(s[right])) {
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[right]);

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

int main() {
    Solution obj;

    cout << obj.lengthOfLongestSubstring("abcabcbb") << endl; 
    cout << obj.lengthOfLongestSubstring("bbbbb") << endl;    
    cout << obj.lengthOfLongestSubstring("pwwkew") << endl;   
    cout << obj.lengthOfLongestSubstring("") << endl;         
    cout << obj.lengthOfLongestSubstring("dvdf") << endl;     
    cout << obj.lengthOfLongestSubstring("abba") << endl;     

    return 0;
}