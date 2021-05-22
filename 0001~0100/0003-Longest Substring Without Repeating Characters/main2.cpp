#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//Sliding Window
//Time Complexity: O(n)
//Space Complexity : O(128)
//这个在leetcode上比用库的要快很多
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int record[128] = {};
		int maxLen = 0;
		int l = 0, r = 0;
		while (r < s.size()) {
			if (record[s[r]] == 0)
				record[s[r]]++, ++r;	//record[s[r++]]++;
			else record[s[l]]--, ++l;	//record[s[l++]]--;
			maxLen = max(maxLen, r - l);
		}
		return maxLen;
	}
};

int main()
{
	cout << Solution().lengthOfLongestSubstring("abcabcbb") << endl;
	cout << Solution().lengthOfLongestSubstring("bbbbb") << endl;
	cout << Solution().lengthOfLongestSubstring("pwwkew") << endl;
	cout << Solution().lengthOfLongestSubstring("") << endl;
	return 0;
}