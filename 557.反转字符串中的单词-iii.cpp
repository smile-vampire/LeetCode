/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        s += ' ';
        auto begin = s.begin(), end = s.begin();
        while(end != s.end())
        {
            if(*end == ' ')
            {
                reverse(begin, end);
                begin = end + 1;
            }
            end++;
        }
        //开始预防最后一个不是空格加了个空格所以要删除
        s.erase(end-1);
        return s;
    }
};
// @lc code=end

