/*
 * @lc app=leetcode.cn id=344 lang=c
 *
 * [344] 反转字符串
 */

// @lc code=start


void reverseString(char* s, int sSize){
    int start=0, end=sSize-1;
    char tmp=0;
    while(start<end)
    {
        tmp=s[start];
        s[start]=s[end];
        s[end]=tmp;
        start++;
        end--;
    }
    return s;
}


// @lc code=end

