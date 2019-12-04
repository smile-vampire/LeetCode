/*
 * @lc app=leetcode.cn id=258 lang=c
 *
 * [258] 各位相加
 */

// @lc code=start


int addDigits(int num){
    while(num>9)
    {
        num=num/10+num%10;
    }
    return num;
}


// @lc code=end

