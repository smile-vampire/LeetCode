/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根
 */

// @lc code=start


int mySqrt(int x){
     int i;
    long low = 0, high = x / 2 + 1 , mid = 0;
    while (low <= high){
        mid = (low + high) / 2;
        if (mid * mid > x){
            high = mid - 1;
        }
        if (mid * mid <= x){
            low = mid + 1;
        }     
    }
    return high;
}


// @lc code=end

