#### [剑指 Offer 49. 丑数](https://leetcode-cn.com/problems/chou-shu-lcof/)

```
class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int> dp(n);
        dp[0] = 1;
        int n2 = 0, n3 = 0, n5 = 0;
        for (int i = 1; i < n; ++i) {

            int aid2 = dp[n2] * 2, aid3 = dp[n3] * 3, aid5 = dp[n5] * 5;
            dp[i] = min(aid2, min(aid3, aid5));
            if (dp[i] == aid2) n2++;
            if (dp[i] == aid3) n3++;
            if (dp[i] == aid5) n5++;
        }

        return dp[n - 1];
    }
};
```

