#### [剑指 Offer 42. 连续子数组的最大和](https://leetcode-cn.com/problems/lian-xu-zi-shu-zu-de-zui-da-he-lcof/)

```
1.贪心
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int max_res = -101;
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            max_res = max(max_res, sum);
            if (sum < 0) sum = 0;
        }
        return max_res;
    }
};
```

