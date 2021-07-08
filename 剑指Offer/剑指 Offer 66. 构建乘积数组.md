#### [剑指 Offer 66. 构建乘积数组](https://leetcode-cn.com/problems/gou-jian-cheng-ji-shu-zu-lcof/)

```
class Solution {
public:
    vector<int> constructArr(vector<int>& a) {

        int len = a.size();
        if (len == 0) return {};
        vector<int> dp(len, 1);
        dp[0] = 1;

        for (int i = 1; i < len; ++i)
            dp[i] = dp[i - 1] * a[i - 1];

        int aid = 1;
        for (int i = len - 2; i >= 0; --i) {
            
            aid *= a[i + 1];
            dp[i] *= aid;
        }
        
        return dp;
    }
};
```

