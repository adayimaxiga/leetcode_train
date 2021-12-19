/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack {
public:
    /** Initialize your data structure here. */
    private:
    queue<int> a;
    public:
    
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        a.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        queue<int> b;
        int tmp = 0;
        int size = a.size();
        if(size!=0)
        {
            for(int i = 0;i < size-1; i++)
            {
                b.push(a.front());
                a.pop();
            }
            tmp = a.front();
            a=b;
            return tmp;
        }
        return 0;
    }
    
    /** Get the front element. */
    int top() {
        queue<int> b;
        int tmp = 0;
        int i = 0;
        int size = a.size();
        if(size!=0)
        {
            for(i = 0;i < size-1; i++)
            {
                b.push(a.front());
                a.pop();
            }
            tmp = a.front();
            b.push(tmp);
            a.pop();
            a=b;
            return tmp;
        }
        return 0;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

