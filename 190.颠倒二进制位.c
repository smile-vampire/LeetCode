/*
 * @lc app=leetcode.cn id=190 lang=c
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
uint32_t reverseBits(uint32_t n) {
    int i;
    uint a;
    uint32_t res=0;
    for(i=0;i<32;i++)
    {   
        a=n&1;
        n=n>>1;
        res+=(a<<(31-i));
    }
    return res;
}
// @lc code=end

