/*
 * @lc app=leetcode.cn id=485 lang=c
 *
 * [485] 最大连续1的个数
 */

// @lc code=start


int findMaxConsecutiveOnes(int* nums, int numsSize){
    int count=0;
    int max=0;
    for(int i=0;i<numsSize;++i)
    {
        if(nums[i]==1)
        {
            count++;
        }
        else
        {
           max=max>count?max:count;
           count=0; 
        }
    }
    max=max>count?max:count;
    return max;
}


// @lc code=end

