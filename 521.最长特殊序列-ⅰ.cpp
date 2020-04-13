/*
 * @lc app=leetcode.cn id=521 lang=cpp
 *
 * [521] 最长特殊序列 Ⅰ
 */

// @lc code=start
class Solution {
public:
    //如果字符串长度不同则返回其长度
    //如果长度相同，内容不同返回任意长度；否则返回-1；
    int findLUSlength(string a, string b) {
        if(a.size() != b.size())
            return max(a.size(),b.size());
        if(strcmp(a.c_str(), b.c_str()) == 0)
            return -1;
        return a.size();
    }
};
// @lc code=end

