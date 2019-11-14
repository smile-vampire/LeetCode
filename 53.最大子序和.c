/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子序和
 */

// @lc code=start


int maxSubArray(int* nums, int numsSize){
    int max=nums[0];
    int sum=nums[0];
    for(int i=1;i<numsSize;++i)
    {
        sum=sum<0?0:sum;
        sum+=nums[i];
        if(sum>max)
        {
            max=sum;
        }
    }
    return max;
}


// @lc code=end

