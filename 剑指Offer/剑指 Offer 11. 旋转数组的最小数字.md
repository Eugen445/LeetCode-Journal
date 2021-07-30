#### [剑指 Offer 11. 旋转数组的最小数字](https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/)

[二分参考](https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/solution/er-fen-jian-zhi-si-xiang-fen-zhi-si-xiang-by-liwei/)

```C++
1.二分
class Solution {
public:
    int minArray(vector<int>& numbers) {
		
        if (numbers.size() == 0) return 0;
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (numbers[mid] > numbers[r]) l = mid + 1;
            else if (numbers[mid] < numbers[r]) r = mid;
            else r--;
        }
        return numbers[l];
    }
};
```

