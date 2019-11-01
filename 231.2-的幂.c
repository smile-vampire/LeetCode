/*
 * @lc app=leetcode.cn id=231 lang=c
 *
 * [231] 2的幂
 */

// @lc code=start


bool isPowerOfTwo(int n){
   if(n<=0)
   return false;
   if((n&(n-1))==0)
   return true;
   return false;
   
}


// @lc code=end

