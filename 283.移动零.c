/*
 * @lc app=leetcode.cn id=283 lang=c
 *
 * [283] 移动零
 */

// @lc code=start

//将非0的全部移到前面后面填充0就行
void moveZeroes(int* nums, int numsSize){
    int found=0;
    for(int i=0;i<numsSize;++i)
    {
        if(nums[i]!=0)
        nums[found++]=nums[i];
    }
    //填充0
    for(int i=found;i<numsSize;++i)
    {
        nums[i]=0;
    }
}


// @lc code=end

