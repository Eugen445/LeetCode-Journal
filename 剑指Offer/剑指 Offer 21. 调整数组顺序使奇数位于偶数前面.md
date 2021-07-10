#### [剑指 Offer 21. 调整数组顺序使奇数位于偶数前面](https://leetcode-cn.com/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof/)

```
1.额外数组
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {

        vector<int> arr(nums.size());
        int l = 0, r = nums.size() - 1;

        for (int i = 0; i < nums.size(); ++i) {

            if (nums[i] % 2) arr[l++] = nums[i];
            else arr[r--] = nums[i];
        }

        return arr;
    }
};

2.不使用额外数组
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {

        int l = 0, r = nums.size() - 1;

        while (l < r) {

            if (nums[l] % 2) l++;
            else {
                swap(nums[l], nums[r--]);
            }
        }

        return nums;
    }
};
```

