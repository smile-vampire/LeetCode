/*
 * @lc app=leetcode.cn id=34 lang=c
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int* ans = (int*)malloc(sizeof(int)*2);
    *returnSize = 2;
    ans[0] = -1;
    ans[1] = -1;

    if(numsSize == 1)
    {
        if(nums[0] == target)
        {
            ans[0] = 0;
            ans[1] = 0;
        }
        return ans;
    }

    int left = 0;
    int right = numsSize;
    //寻找左边界
    while(left < right)
    {
        int mid = left + (right-left)/2;
        if(nums[mid] == target)
        {
            right = mid;
        }
        else if(nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    //左边二分法完成
    if(left == numsSize)
    {
        ans[0] = -1;
        ans[1] = -1;
        return ans;
    }
    else{
        ans[0] = left;
    }

    //寻找右边界
    left = 0;
    right = numsSize;
    while(left < right)
    {
        int mid = left + (right-left)/2;
        if(nums[mid] == target)
        {
            left = mid+1;
        }
        else if(nums[mid] < target)
        {
            left = mid+1;
        }
        else{
            right = mid;
        }
    }
    //右边完成
    if(left-1 == numsSize)
    {
        ans[0] = -1;
        ans[1] = -1;
        return ans;
    }
    else
    {
        ans[1] = left - 1;
    }
    if(ans[0] > ans[1])
    {
        ans[0] = -1;
        ans[1] = -1;
    }
    return ans;
}


// @lc code=end

