```C++
1.最初的写法
class Solution {
public:
    vector<int> constructRectangle(int area) {

        vector<vector<int>> res;
        int min_dis = INT_MAX;
        for (int i = sqrt(area); i >= 1; --i) {
            int j = area / i;
            if (i * j == area && i <= j) {
                if (j - i < min_dis) {
                    min_dis = j - i;
                    res.push_back({j, i});
                }
            }
        }
        return res.back();
    }
};

2.sqrt往左找(O sqrt(area))
class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        int i = sqrt(area);
        while (area % i) {
            --i;
        }

        return {area / i, i};
    }
};
```

