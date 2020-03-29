/*
 * @lc app=leetcode.cn id=476 lang=cpp
 *
 * [476] 数字的补数
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        int shift = 0;
        int com = 0;
        if(num == 0)
            return 1;
        while(num)
        {
            int tmp = ((num)&1)^1;
            com = com | (tmp<<shift);
            num = num>>1;
            shift++;
        }
        return com;
    }
};
// @lc code=end

