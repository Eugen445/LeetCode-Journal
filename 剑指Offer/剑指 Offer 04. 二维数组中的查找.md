#### [剑指 Offer 04. 二维数组中的查找](https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/)

```
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {

        if (matrix.size() == 0) return false;
        int col = matrix[0].size() - 1;
        int row = 0;

        while (col >= 0 && row < matrix.size()) {

            if (matrix[row][col] < target)  row++;
            else if (matrix[row][col] > target) col--;
            else return true;
        }

        return false;
    }
};
```

