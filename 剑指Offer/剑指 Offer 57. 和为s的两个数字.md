#### [剑指 Offer 57. 和为s的两个数字](https://leetcode-cn.com/problems/he-wei-sde-liang-ge-shu-zi-lcof/)

```
1.双指针
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int l =0, r = nums.size() - 1;
        while (l < r) {

            if (nums[l] + nums[r] > target) --r;
            else if (nums[l] + nums[r] < target) ++l;
            else return vector<int>{nums[l], nums[r]};
        }

        return {-1,-1};
    }
};
```

