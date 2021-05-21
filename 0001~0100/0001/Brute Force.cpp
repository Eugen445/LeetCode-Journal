#include <iostream>
#include <vector>
using namespace std;

//Brute Force
//Time Complexity: O(n^2)
//Space Complexity: O(1)
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size(); ++i) {
			for (int j = i + 1; j < nums.size(); ++j) {
				if (nums[i] + nums[j] == target) {
					return { i, j };
				}
			}
		}
	}
};

void printVec(const vector<int>& vec) 
{
	for (int e : vec)
		cout << e << " ";
	cout << endl;
}

int main() 
{
	vector<int> nums{ 2, 7, 11, 15 };
	int target = 9;
	printVec(Solution().twoSum(nums, target));

	return 0;
}