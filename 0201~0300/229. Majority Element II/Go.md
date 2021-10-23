```go
1.哈希计数
func majorityElement(nums []int) []int {

    cnt := map[int]int {}
    res := make([]int, 0)
    for _ , num := range nums {
        cnt[num]++
    }
    for i := range cnt {
        if cnt[i] > len(nums) / 3 {
            res = append(res, i)
        }
    }

    return res
}
```

