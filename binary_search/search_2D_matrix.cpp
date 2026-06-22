#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
		bool searchMatrix(vector<vector<int>>& matrix,int target){
			int row = matrix.size();
			int col = matrix[0].size();
			
			int left = 0; 
			int right = row * col - 1;
			while(left <= right){
				int mid = left - (right - left)/2;

				int row = mid/col;
				int col = mid%col;

				int value = matrix[row][col];
				if(value == target){
					return true;
				}
				if(value < target){
					left = mid + 1;
				}else{
					right = mid - 1;
				}
			}
			return false;
		};
};

int main(){
	vector<vector<int>> matrix = {
		{1,2,5,7},
		{10,11,16,20},
		{23,30,34,60}
	};

	int target = 60;

	Solution sol; 

	if(sol.searchMatrix(matrix,target)){
		cout<<"true";
	}else{
		cout<<"False";
	}

	return 0;
}
