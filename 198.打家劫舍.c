/*
 * @lc app=leetcode.cn id=198 lang=c
 *
 * [198] 打家劫舍
 */

// @lc code=start


int rob(int* nums, int numsSize){
    int money1=0;
    int money2=0
    for(int i=0;i<numsSize-1;i=i+2)
    {
        money1+=nums[i];
        money2+=num[i+1];
    }
    return (money1>money2)?money1:money2;
}


// @lc code=end

