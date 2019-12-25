/*
 * @lc app=leetcode.cn id=387 lang=c
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start


int firstUniqChar(char * s){
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        for(int j=1;j<len;j++)
        {
            if(s[i]==s[j])
            break;
        }
        if(s[j]=='\0')
            return i;
    }
    return -1;
}


// @lc code=end

