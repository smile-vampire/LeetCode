/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
static int roman_to_integer(char c)
{
    switch (c)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return;
     }
}
   

int romanToInt(char * s){
    int i,result=roman_to_integer(s[0]);

    for(i=1;s[i]!='\0';i++)
    {
        int prev = roman_to_integer(s[i-1]);
        int cur = roman_to_integer(s[i]);

        if(prev<cur){
            result=result-prev+(cur-prev);
        }
        else{
            result +=cur;
        }
    }
    return result;
}


// @lc code=end

