#### [剑指 Offer 15. 二进制中1的个数](https://leetcode-cn.com/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/)

```
1.遍历32次
class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count = 0;
        for (int i = 0; i < 32; ++i) { //这样写法需要循环32次
            if (n & 1)
                ++count;
            n >>= 1; 
        }

        return count;
    }
};

2.利用x & (x - 1)
class Solution {
public:
    int hammingWeight(uint32_t n) {

        int count = 0;
        while (n) {

            n &= n - 1;
            ++count;
        }

        return count;
    }
};
```

