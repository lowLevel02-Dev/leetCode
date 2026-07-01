#include <iostream>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> seen;
        while (n != 1)
        {
            if (seen.count(n))
            {
                return false;
            }
            seen.insert(n);
            int sum = 0;
            while (n > 0)
            {
                int x = n % 10;
                sum = sum + x * x;
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};

int main()
{
    Solution obj;

    cout << obj.isHappy(19) << endl;  // 1 (true)
    cout << obj.isHappy(2) << endl;   // 0 (false)

    return 0;
}