/*
 * @lc app=leetcode.cn id=389 lang=c
 *
 * [389] 找不同
 */

// @lc code=start


char findTheDifference(char * s, char * t){
    char sum=0;
    for(int i=0;i<strlen(t);++i)
    {
        sum^=s[i]^t[i];
    }
    return sum;
}


// @lc code=end

