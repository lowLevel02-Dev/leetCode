#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>freq;
        int left = 0, sum = 0;
        for(int right = 0; right < fruits.size(); right++){
            freq[fruits[right]]++;
            while(freq.size() > 2){
                freq[fruits[left]]--;
                if(freq[fruits[left]] == 0){
                    freq.erase(fruits[left]);
                }
                left++;
            }
            sum = max(sum , right - left + 1);
        }
        return sum;
    }
};
int main(){
    vector<int>fruits = {}; 
    Solution sol; 
    int res = sol.totalFruit(fruits);
    cout<<res; 
    return 0;
}