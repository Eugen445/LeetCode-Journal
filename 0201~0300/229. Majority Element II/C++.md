```C++
1.哈希计数
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int len = nums.size() / 3;
        unordered_map<int,int> umap;
        for (int i = 0; i < nums.size(); ++i) {
            umap[nums[i]]++;
        }

        vector<int> res;
        for (auto &e : umap)
            if (e.second > len)
                res.push_back(e.first);
        
        return res;
    }
};
```

