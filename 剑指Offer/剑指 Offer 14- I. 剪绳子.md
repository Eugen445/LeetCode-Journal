#### [剑指 Offer 14- I. 剪绳子](https://leetcode-cn.com/problems/jian-sheng-zi-lcof/)

```
1.class Solution {
public:
    int cuttingRope(int n) {

        if (n <= 3) return n - 1;
        int ret = 1;
        while (n > 4) {
            ret *= 3;
            n -= 3;
        }
        
        ret *= n;

        return ret;
    }
};

2.动态规划
class Solution {
public:
    int cuttingRope(int n) {

        vector<int> dp(n + 1);
        dp[2] = 1;

        for (int i = 3; i <= n; ++i) {

            for (int j = 1; j < i; ++j) {

                dp[i] = max(dp[i], max(dp[i - j] * j, (i - j) * j));
            }
        }

        return dp[n];
    }
};
```

