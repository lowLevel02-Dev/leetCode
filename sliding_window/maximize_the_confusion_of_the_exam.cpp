#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int solve(string &s, int k , char ch){
        int left = 0, sum = 0 , count = 0;
        for(int right = 0; right < s.size(); right++){
            if(s[right] == ch){
                count++;
            }
            while(count > k){
                if(s[left] == ch){
                    count--;
                }
                left++;
            }
            sum = max(sum, right - left + 1);
        }
        return sum;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(solve(answerKey,k,'F'),solve(answerKey,k,'T'));
    }
};
int main(){
    Solution sol;
    string answerKey = "TTFF"; 
    int k = 2; 
    int res = sol.maxConsecutiveAnswers(answerKey,k);
    cout<<res;
    return 0;
}