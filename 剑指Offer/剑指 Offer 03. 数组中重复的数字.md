#### [剑指 Offer 03. 数组中重复的数字](https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/)

```
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {

        for (int i = 0; i < nums.size(); ++i) {

            if (nums[i] == i)
                continue;
            
            if (nums[nums[i]] == nums[i])
                return nums[i];
            swap(nums[nums[i]], nums[i]);
        }

        return -1;
    }
};
```

