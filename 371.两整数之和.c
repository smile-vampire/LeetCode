/*
 * @lc app=leetcode.cn id=371 lang=c
 *
 * [371] 两整数之和
 */

// @lc code=start
//第一步：相加各位的值，不算进位，得到010，二进制每位相加就相当于各位做异或操作，101^111。
//第二步：计算进位值，得到1010，相当于各位进行与操作得到101，再向左移一位得到1010，(101&111)<<1。
//第三步重复上述两步，各位相加 010^1010=1000，进位值为100=(010 & 1010)<<1。
//继续重复上述两步：1000^100 = 1100，进位值为0，跳出循环，1100为最终结果。

int getSum(int a, int b){
    while(b!=0)
    {
        int tmp=a^b;
        b=((unsigned)(a&b))<<1;
        a=tmp;
    } 
    return a;
}


// @lc code=end

