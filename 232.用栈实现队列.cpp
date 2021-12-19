/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
private:
    stack<int> a;
public:

    MyQueue() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        stack<int> b;
        int tmp = 0;
        int size = a.size();
        if(size!=0)
        {
            for(int i = 0;i < size-1; i++)
            {
                b.push(a.top());
                a.pop();
            }
            tmp = a.top();
            a.pop();
            for(int i = 0;i < size-1; i++)
            {
                a.push(b.top());
                b.pop();
            }
            return tmp;
        }
        return 0;
    }
    
    int peek() {
        stack<int> b;
        int tmp = 0;
        int i = 0;
        int size = a.size();
        if(size!=0)
        {
            for(i = 0;i < size-1; i++)
            {
                b.push(a.top());
                a.pop();
            }
            tmp = a.top();
            b.push(tmp);
            a.pop();
            for(int i = 0;i < size; i++)
            {
                a.push(b.top());
                b.pop();
            }
            return tmp;
        }
        return 0;
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

