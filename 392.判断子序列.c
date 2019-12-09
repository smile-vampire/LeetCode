/*
 * @lc app=leetcode.cn id=392 lang=c
 *
 * [392] 判断子序列
 */

// @lc code=start


bool isSubsequence(char * s, char * t){
        while (*t) {
        if (0 == *s)
            return true;
        else if (*s == *t) {
            ++s;
            ++t;
        } else
            ++t;
    }
    return 0 == *s;

}


// @lc code=end

