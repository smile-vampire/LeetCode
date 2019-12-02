/*
 * @lc app=leetcode.cn id=136 lang=c
 *
 * [136] 只出现一次的数字
 */

// @lc code=start


int singleNumber(int* nums, int numsSize){
    int num=0;
    int ret=0;
    for(int i=0;i<numsSize;i++)
    {
        ret^=num^nums[i];
    }
    return ret;
}


// @lc code=end

