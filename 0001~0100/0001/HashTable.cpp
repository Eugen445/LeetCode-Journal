#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//Hash Table
//Time Complexity: O(n)
//Space Complexity: O(n)
class Solution0 {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		unordered_map<int, int> umap;
		for (int i = 0; i < nums.size(); ++i) {
			auto iter = umap.find(target - nums[i]);
			if (iter != umap.end()) {
				return { iter->second, i };
			}
			umap.insert(pair<int, int>(nums[i], i));
		}

		throw invalid_argument("the input has no solution");
	}
};

//¡Ì“ª÷÷–¥∑® …‘Œ¢∑±Àˆ
class Solution1 {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		unordered_map<int, int> record;
		for (int i = 0; i < nums.size(); ++i) {
			record[nums[i]] = i;
		}

		for (int i = 0; i < nums.size(); ++i) {
			unordered_map<int, int>::iterator iter = record.find(target - nums[i]);
			if (iter != record.end() && iter->second != i)
				return { i, iter->second };
		}
		throw invalid_argument("the input has no solution");
	}
};

void printVec(const vector<int>& vec) 
{
	for (int i : vec) 
		cout << i << " ";
	cout << endl;
}

int main()
{
	//vector<int> nums = { 1, 1, 1, 1 };
	//int target = 2;
	vector<int> nums = { 2, 7 , 9, 11 };
	int target = 11;
	printVec(Solution0().twoSum(nums, target));
	printVec(Solution1().twoSum(nums, target));

	return 0;
}