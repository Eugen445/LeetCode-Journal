#### [剑指 Offer 42. 连续子数组的最大和](https://leetcode-cn.com/problems/lian-xu-zi-shu-zu-de-zui-da-he-lcof/)

```
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int aid = 0;
        int ret = -101;
        for (int i = 0; i < nums.size(); ++i) {

            aid += nums[i];
            ret = max(ret, aid);
            if (aid < 0) aid = 0;
        }

        return ret;
    }
};
```

