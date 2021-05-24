#include <iostream>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;

		long long sum = 0; //-231 <= x <= 231 - 1的翻转可能溢出
		int aid = x; //尽量不修改原来数据
		while (aid) {
			sum = sum * 10 + aid % 10;
			aid /= 10;
		}
		return sum == x;
	}
};

int main()
{
	cout << Solution().isPalindrome(121) << endl;
	cout << Solution().isPalindrome(10) << endl;
	cout << Solution().isPalindrome(INT_MAX) << endl;
	cout << Solution().isPalindrome(INT_MIN) << endl;
	cout << Solution().isPalindrome(-10) << endl;
}