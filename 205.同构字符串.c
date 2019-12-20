/*
 * @lc app=leetcode.cn id=205 lang=c
 *
 * [205] 同构字符串
 */

// @lc code=start


bool isIsomorphic(char * s, char * t){
    int i = 0;
    while (s[i]) {
        if (find_fir(s,i) != find_fir(t,i)) return false;
        ++i;
    }
    return true;
}
int find_fir(char *s, int end)
{
    int i = 0;
    while (i < end) {
        if (s[i] == s[end]) return i;
        ++i;
    }
    return end;
}


// @lc code=end

