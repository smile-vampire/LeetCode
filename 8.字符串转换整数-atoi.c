/*
 * @lc app=leetcode.cn id=8 lang=c
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start


int myAtoi(char * str){
    long ret = 0;
    int falg = 1;
    for(; *str == 32; str++);
    switch(*str)
    {
        case 45:
            falg = -1;
        case 43:
            str++;
    }
    if(*str < 48 || *str > 57)
        return 0;
    while(*str >= 48 && *str <= 57)
    {
        ret = ret*10 + (*str - 48);
        if((int)ret != ret)
        {
            return (falg == 1) ? INT_MAX : INT_MIN;
        }
        str++;
    }
    ret *= falg;
    return (int)ret;
}


// @lc code=end

