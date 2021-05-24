/*#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		int record[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
		string myMap[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

		string s = "";
		for (int i = 0; i < 13; ++i)
			while (num >= record[i]) {
				num -= record[i];
				s += myMap[i];
			}

		return s;
	}
};

int main()
{
	cout << Solution().intToRoman(1001) << endl;
	cout << Solution().intToRoman(499) << endl;
	cout << Solution().intToRoman(999) << endl;
	cout << Solution().intToRoman(99) << endl;
	cout << Solution().intToRoman(9) << endl;
	
	return 0;
}*/