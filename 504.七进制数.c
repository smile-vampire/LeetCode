/*
 * @lc app=leetcode.cn id=504 lang=c
 *
 * [504] 七进制数
 */

// @lc code=start


char * convertToBase7(int num){
    if(num==0)
        return '0';
    int falg=num;
    if(num<0)
    {
        num*=-1;
    }
    char ans='';
    int dig=0;
    while(num>0)
    {
        dig=num%7;
        ans+=dig;
        num=num/7;
    }
    if(falg<0)
        ans+='-';
    return ans;
}


// @lc code=end

