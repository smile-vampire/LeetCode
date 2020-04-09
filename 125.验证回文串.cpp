/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isNumandchar(char ch)
    {
        return (ch >= '0' && ch <= '9')
            ||(ch >= 'a' && ch <= 'z')
            ||(ch >= 'A' && ch <= 'Z');
    }
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        for(auto& ch:s)
        {
            if(ch >= 'a' && ch <= 'z')
                ch -= 32;
        }
        while(left < right)
        {
            while(left < right && !isNumandchar(s[left]))
            {
                left++;
            }

            while(left < right && !isNumandchar(s[right]))
            {
                right--;
            }

            if(s[left] != s[right])
            {
                return false;
            }
            else
            {
                left++;
                right--;
            }   
        }
        return true;
    }
};
// @lc code=end

