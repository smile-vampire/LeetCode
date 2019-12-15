/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start

//遇到空格将len置为0；即空格后面一个置为1；
int lengthOfLastWord(char * s){
    int len=0;
    while(*s!='\0')
    {
        if(s[-1]==' ' && s[0]!=' ')
        {
            len=1;
        }
        else if(*s!=' ')
        {
            len++;
        }
        s++;
    }
    return len;
}


// @lc code=end

