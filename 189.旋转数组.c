/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 旋转数组
 */

// @lc code=start

//分布逆置和整体逆置
void rotate(int* nums, int numsSize, int k)
{
    if(k<=0||numsSize<=0)
     return ;
    k%=numsSize;
    Reverse(nums,0,numsSize-k-1);
    Reverse(nums,numsSize-k,numsSize-1);
    Reverse(nums,0,numsSize-1);
}
//逆置数组
void Reverse (int* nums,int left,int right)
{
    for(;left<right;)
    {
        int tmp=nums[left];
        nums[left++]=nums[right];
        nums[right--]=tmp;
    }
}
// @lc code=end

