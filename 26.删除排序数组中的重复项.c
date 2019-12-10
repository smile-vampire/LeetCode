/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
    if(nums==NULL||numsSize==0)
        return 0;
    int one=0;
    int two=1;
    while(two<numsSize)
    {
        if(nums[one]==nums[two])
        {
            two++;
        }
        else
        {
            nums[one+1]=nums[two];
            one++;
            two++;
        }
    }
    return one+1;
      
}


// @lc code=end

