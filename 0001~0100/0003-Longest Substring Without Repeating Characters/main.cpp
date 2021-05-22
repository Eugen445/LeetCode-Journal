/*#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <string>
using namespace std;

//Sliding Window
//Time Complexity : O(n)
//Space ComPlexity: O(128)
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		unordered_set <char> record;
		int maxLen = 0;
		int l = 0, r = 0;
		while (r < s.size()) {
			if (record.find(s[r]) != record.end())
				record.erase(s[l++]);
			else record.insert(s[r++]);
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
}*/