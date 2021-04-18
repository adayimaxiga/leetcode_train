/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> min_val;
    stack<int> data;
    MinStack() {

    }
    
    void push(int val) {
        data.push(val);

        if(min_val.size()==0)
        {
            min_val.push(val);
            return;
        }

        if(val < min_val.top())
        {
            min_val.push(val);
        }else
        {
            min_val.push(min_val.top());
        }
    }
    
    void pop() {
        data.pop();
        min_val.pop();
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return min_val.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

