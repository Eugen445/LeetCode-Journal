```python
1.哈希计数
class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:

        cnt = {}
        res = []

        for v in nums:
            if v in cnt:
                cnt[v] += 1
            else:
                cnt[v] = 1

        for item in cnt.keys():
            if (cnt[item] > len(nums) / 3):
                res.append(item)

        return res
```

