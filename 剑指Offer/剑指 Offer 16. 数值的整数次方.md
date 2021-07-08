#### [剑指 Offer 16. 数值的整数次方](https://leetcode-cn.com/problems/shu-zhi-de-zheng-shu-ci-fang-lcof/)

```
0.遍历超时
class Solution {
public:
    double myPow(double x, int n) {

        if (n == 0) return 1.0;

        double ret = 1.0;
        for (int i = 1; i <= abs(n); ++i)
           ret *= x;

        return n > 0 ? ret : 1/ret;
    }
};

1.递归
class Solution {
public:
    double myPow(double x, long n) {

        if (n == 0) return 1.0;
        if (n < 0) n = -n, x = 1/x;

        return n & 1 ? x * myPow(x * x, n >> 1) : myPow(x * x, n >> 1);
    }
};

2.非递归
class Solution {
public:
    double myPow(double x, long n) {

        if (n == 0) return 1;
        if (n < 0) n = -n, x = 1/x;

        double ret = 1.0;
        while (n) {

            if (n & 1) ret *= x;
            x *= x;
            n >>= 1;
        }

        return ret;
    }
};
```

