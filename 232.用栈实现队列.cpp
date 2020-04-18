/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
private:
    stack<int> pushs,pops;//利用两个栈实现队列
    //1.只有当pops栈中为空的时候，才可以将pushs栈中的元素倒入pops栈
    //2.而且pushs栈要一次倒完
    void push2pop()
    {
        if(pops.empty())
        {
            while(!pushs.empty())
            {
                pops.push(pushs.top());
                pushs.pop();
            }
        }
    }
public:
    MyQueue() {

    }
    
    void push(int x) {
        //直接压入
        pushs.push(x);
    }
    
    int pop() {
        //如果pops中没有元素，就先把pushs中的元素依次弹出压入pops
        push2pop();
        //pops中已经有元素了,就直接获取pops的栈顶元素
        int res = pops.top();
        pops.pop();
        return res;
    }
    
    int peek() {
        //如果pops中没有元素，就先把pushs中的元素依次弹出压入pops
        push2pop();
        //pops中已经有元素了,就直接获取pops的栈顶元素
        int res = pops.top();
        return res;
    }
    
    bool empty() {
        //只要有一个栈元素不为空，队列就不为空
        return pushs.empty() && pops.empty();
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

