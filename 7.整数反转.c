/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start


int reverse(int x){
    double res=0;
    while(x!=0)
    {
        res=x%10+res*10;
    if(res>INT_MAX||res<INT_MIN)
    {
        return 0;
    }
     x=x/10;
    }
    return (int)res;
}


// @lc code=end

