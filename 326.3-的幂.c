/*
 * @lc app=leetcode.cn id=326 lang=c
 *
 * [326] 3的幂
 */

// @lc code=start


bool isPowerOfThree(int n){
    if (n < 1) return false;
    unsigned int tmp = 1;
    while (tmp < n) tmp = (tmp << 1) + tmp;
    return (tmp == n ? true : false);
}


// @lc code=end

