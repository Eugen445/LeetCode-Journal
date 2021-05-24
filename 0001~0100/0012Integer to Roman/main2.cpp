#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

const string thousands[] = { "", "M", "MM", "MMM" };
const string hundreds[] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
const string tens[] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
const string ones[] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
class Solution {
public:
	string intToRoman(int num) {
		return thousands[num / 1000] + hundreds[num % 1000 / 100] + tens[num % 100 / 10] + ones[num % 10];
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
}