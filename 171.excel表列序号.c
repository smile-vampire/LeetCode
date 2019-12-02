/*
 * @lc app=leetcode.cn id=171 lang=c
 *
 * [171] Excel表列序号
 */

// @lc code=start

//每个字符转换相当于S[i]-'A'+1
//26个字母所以为26进制
//求26进制没位数
int titleToNumber(char * s){
    if(s==0)
        return 0;
    long num=0;
    for(int i=0;i<strlen(s);++i)
    {
        num=num*26+s[i]-'A'+1;
    }
    return num;
}


// @lc code=end

