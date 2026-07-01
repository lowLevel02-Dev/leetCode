#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> ans;

    unordered_map<char, string> phone = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}};

    void dfs(string &digits, int index, string &current)
    {

        if (index == digits.size())
        {
            ans.push_back(current);
            return;
        }
        string letters = phone[digits[index]];

        for (char ch : letters)
        {
            current.push_back(ch);
            dfs(digits, index + 1, current);
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return {};

        string current = "";
        dfs(digits, 0, current);

        return ans;
    }
};

int main()
{
    Solution obj;

    string digits;
    cout << "Enter digits (2-9): ";
    cin >> digits;

    vector<string> result = obj.letterCombinations(digits);

    cout << "\nPossible combinations:\n";
    for (string s : result)
    {
        cout << s << " ";
    }

    cout << endl;

    return 0;
}