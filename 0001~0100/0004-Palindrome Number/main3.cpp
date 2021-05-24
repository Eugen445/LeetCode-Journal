#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;

		string s = to_string(x);
		int l = 0, r = s.size() - 1;
		while (l < r) {
			if (s[l] == s[r]) ++l, --r;
			else return false;
		}
		return true;
	}
};

int main()
{
	cout << Solution().isPalindrome(121) << endl;
	cout << Solution().isPalindrome(10) << endl;
	cout << Solution().isPalindrome(INT_MAX) << endl;
	cout << Solution().isPalindrome(INT_MIN) << endl;
	cout << Solution().isPalindrome(-10) << endl;
	return 0;
}