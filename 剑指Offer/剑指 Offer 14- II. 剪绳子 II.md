#### [剑指 Offer 14- II. 剪绳子 II](https://leetcode-cn.com/problems/jian-sheng-zi-ii-lcof/)

```
1.贪心
class Solution {
public:
    int cuttingRope(int n) {

        if (n <= 3) return n - 1;
        int aid = 1e9 + 7;
        long ret = 1;
        while (n > 4) {

            ret = (ret * 3) % aid;
            n -= 3;
        }

        return ret * n % aid;
    }
};
```

