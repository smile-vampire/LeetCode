/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    int src=0,sub=0;
    while(src<numsSize)
    {
        if(nums[src]==val)
        {
            src++;
        }
        else
        {
            nums[sub++]=nums[src++];
        } 
    }
    return sub;
}


// @lc code=end

