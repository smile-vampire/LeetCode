/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start


int searchInsert(int* nums, int numsSize, int target){
    int left=0;
    int right=numsSize-1;
    int mid;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(target<nums[mid])
        {
            right=mid-1;
        }
        else if (target>nums[mid])
        {
            left=mid+1;
        }
        else if(target==nums[mid])
        {
            return mid;
        } 
    }
    if(target<nums[mid])
     {
         return mid;
     }
    else
    {
        return mid+1;
    }
      
}


// @lc code=end

