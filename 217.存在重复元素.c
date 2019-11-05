/*
 * @lc app=leetcode.cn id=217 lang=c
 *
 * [217] 存在重复元素
 */

// @lc code=start


bool containsDuplicate(int* nums, int numsSize){

    for(size_t i=0;i<numsSize;i++)
    {
        for(size_t j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                return true;
                break;
            }
        }
    }
    return false;
}


// @lc code=end

