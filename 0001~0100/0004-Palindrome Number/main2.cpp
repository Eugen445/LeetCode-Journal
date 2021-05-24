#include <iostream>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		//负数和末位为0(除了0)的数都不可能是回文数
		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}

		int aid = 0;    //这种方法可以解决int溢出的问题
		while (x > aid) { //这里的x是会变的
			aid = aid * 10 + x % 10;
			x /= 10;
		}
		//12321 //最终x == 12 aid == 123
		//奇数的情况aid 需要/10;
		return x == aid || x == aid / 10;
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