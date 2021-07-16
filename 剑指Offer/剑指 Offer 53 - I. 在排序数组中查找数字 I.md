#### [剑指 Offer 53 - I. 在排序数组中查找数字 I](https://leetcode-cn.com/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof/)

```
1.线性查找
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target)
                ++count;
        }
        return count;
    }
};
2.二分法查找左边界
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (r - l) / 2 + l; 
            if (nums[mid] < target) l = mid + 1;
            else r = mid;
        }
        int count = 0;
        for (int i = r; i < nums.size() && nums[i] == target; ++i)
            ++count;

        return count;
    }
};
```

