#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size() - 1;
        while(low <= high){
        	int mid = low + (high - low)/2;
		if(nums[mid] == target){
			return mid;
		}

		if(nums[low] <= nums[mid]){
			if(target >= nums[low] && target <= nums[mid]){
				high = mid - 1; 
			}else{
				low = mid + 1; 
			}
		}else{
			if(target > nums[low] && target <= nums[high]){
				low = mid + 1;
			}else{
				high = mid - 1;
			}
		}
        	
    	}
    	return -1;
    }
};

int main(){
	vector<int>nums = {10,9,8,7,6,5,0,1,2,3,4};
	int target = 5;
	Solution sol;
	int res = sol.search(nums,target);
	cout<<res;
}
