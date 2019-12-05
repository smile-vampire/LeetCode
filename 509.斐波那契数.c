/*
 * @lc app=leetcode.cn id=509 lang=c
 *
 * [509] 斐波那契数
 */

// @lc code=start


int fib(int N){
    if(N==0||N==1)
        return N;
    else
        return fib(N-1)+fib(N-2);
}


// @lc code=end

