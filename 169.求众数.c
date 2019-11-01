/*
 * @lc app=leetcode.cn id=169 lang=c
 *
 * [169] 求众数
 */

// @lc code=start


int majorityElement(int* nums, int numsSize){
    int mode=nums[0];
    int count=0;
    for(size_t i=0;i<numsSize;++i)
    {
        if(mode==nums[i])
        {
            count++;
        }
        else
        {
            {
                count--;
            }
        }
        if(count<=0)
        {
            mode=nums[1+i];
        }
        
    }
    return mode;
}


// @lc code=end

