#### [剑指 Offer 30. 包含min函数的栈](https://leetcode-cn.com/problems/bao-han-minhan-shu-de-zhan-lcof/)

```
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> nor_stack;
    stack<int> min_stack;
    MinStack() {
        min_stack.push(INT_MAX);
    }
    
    void push(int x) {
        nor_stack.push(x);
        min_stack.push(::min(min_stack.top(), x));
    }
    
    void pop() {
        nor_stack.pop();
        min_stack.pop();
    }
    
    int top() {
        return nor_stack.top();
    }
    
    int min() {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
```

