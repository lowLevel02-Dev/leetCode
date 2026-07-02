#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> anagram;
        for (string word : strs)
        {
            string key = word;
            sort(key.begin(), key.end());
            anagram[key].push_back(word);
        }
        vector<vector<string>> res;
        for (auto &p : anagram)
        {
            res.push_back(p.second);
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> res = sol.groupAnagrams(strs);
    for (int i = 0; i < res.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "]\n";
    }
}
