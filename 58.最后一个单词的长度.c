/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start

//遇到空格将len置为0；即空格后面一个置为1；
int lengthOfLastWord(char * str){
    char *s = str;

    int lastL  = 0;
    int length = 0;

    while(*s) {
        if (*s == ' ') {
            lastL  = length? length:lastL;
            length = 0;
        } else {
            length ++;
        }
        s++;
    }
    
    return length? length: lastL; 
}


// @lc code=end

