#### [剑指 Offer 31. 栈的压入、弹出序列](https://leetcode-cn.com/problems/zhan-de-ya-ru-dan-chu-xu-lie-lcof/)

```
1.栈
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        stack<int> st;

        int i = 0;
        for (int e : pushed) {

            st.push(e);
            while (!st.empty() && st.top() == popped[i]) { //这个地方记得写while
                st.pop();
                i++;
            } 
        }
        
        return st.empty();
    }
};
```

