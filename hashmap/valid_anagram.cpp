#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }
        unordered_map<char, int> anagram;
        for (char c : s)
        {
            anagram[c]++;
        }

        for (char c : t)
        {
            anagram[c]--;
        }

        for (auto &p : anagram)
        {
            if (p.second != 0)
                return false;
        }
        return true;
    }
};

int main()
{
    string s = "abcd";
    string t = "dcba";
    Solution sol;
    bool res = sol.isAnagram(s, t);
    cout << res;
    return 0;
}