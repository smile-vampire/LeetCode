/*
 * @lc app=leetcode.cn id=709 lang=c
 *
 * [709] 转换成小写字母
 */

// @lc code=start


char * toLowerCase(char * str){
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        ++i;
    }
    return str;
}



// @lc code=end

