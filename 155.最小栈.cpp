/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> data;
    stack<int> min;
    // MinStack() {
        
    // }
    
    void push(int x) {
        data.push(x);
        if(min.empty())
        {
            min.push(x);
        }
        else
        {
            if(min.top() > x)
            {
                min.push(x);
            }
            else
            {
                min.push(min.top());
            }
            
        }
        
    }
    
    void pop() {
        if(data.empty())
            return;
        data.pop();
        min.pop();
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

