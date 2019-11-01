/*
 * @lc app=leetcode.cn id=202 lang=c
 *
 * [202] 快乐数
 */

// @lc code=start


bool isHappy(int n){
    if(n<=0)
    return false;
     long sum=0;
    while(n>0)
    {
        sum=(n%10)*(n*10)+(n/10)*(n/10);
        if(sum==1)
        {
            return true;
            break;
        }
        else
        {
            n=(long)sum;
        }
    }
    return false;
}


// @lc code=end

