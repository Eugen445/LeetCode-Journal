```C++
class Solution {
public:
    bool areNumbersAscending(string s) {
        
        bool flag = true;
        int pre_num = INT_MIN;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= '1' && s[i] <= '9') {
                int cur_num = 0;
                int j = i;
                while (s[j] != ' ' && j < s.size()) { //记得边界判断
                    cur_num *= 10;
                    cur_num += s[j++] - '0';
                }
                if (cur_num <= pre_num) {
                    flag = false;
                    break;
                }
                pre_num = cur_num;
                i = j; //错误写法 i = j + 1
            }
        }
        return flag;
    }
};
```

