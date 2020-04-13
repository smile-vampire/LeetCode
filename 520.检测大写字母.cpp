/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        //第一种情况aAAAAA
        if(!isupper(word[0]) && isupper(word[1]))
            return false;

        int count = 0;
        for(int i = 1; i < word.size(); i++)
        {
            if(isupper(word[i]))
                count++;
        }
        if(count == 0 || count == word.size()-1)
            return true;
        return false;

    }
};
// @lc code=end

