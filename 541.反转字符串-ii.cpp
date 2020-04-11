/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.size();
        for(int i = 0; i < len; i += k*2)
        {
            if(i + k < len)
            {
                reverse(s.begin()+i,s.begin()+i+k);
            }
            else
            {
                reverse(s.begin()+i,s.end());
            }
        }
        return s;
    }
};
// @lc code=end

