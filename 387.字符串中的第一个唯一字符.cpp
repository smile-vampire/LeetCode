/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        int i = 0;
        int str[26] = {0};
        for(; i < s.size(); i++)
        {
            str[s[i] - 'a']++;
        }

        for(i = 0; i < s.size(); i++)
        {
            if(str[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};
// @lc code=end

