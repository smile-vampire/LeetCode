/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        if(num == 0)
            return "0";
        string res = "";
        string ans[16] = {"0","1","2","3","4","5","6","7","8","9","a",
                        "b","c","d","e","f"};
        unsigned int num1 = num;
        while(num1)
        {
            res = ans[num1%16] + res;
            num1 /= 16;
        }
        return res;
    }
};
// @lc code=end

