#include <iostream>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		//������ĩλΪ0(����0)�������������ǻ�����
		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}

		int aid = 0;    //���ַ������Խ��int���������
		while (x > aid) { //�����x�ǻ���
			aid = aid * 10 + x % 10;
			x /= 10;
		}
		//12321 //����x == 12 aid == 123
		//���������aid ��Ҫ/10;
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