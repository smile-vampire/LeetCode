/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start


bool isPalindrome(int x){
    long y=0;
    int start=x;
    if(x<0)
    {
        return false;
    }
    else
    {
        while(x!=0)
        {
            y=y*10+x%10;
            x=x/10;
        }
         if(start==y)
            {
                return true;
            } 
        return false;
    } 
}


// @lc code=end

