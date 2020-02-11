/*
 * @lc app=leetcode.cn id=414 lang=c
 *
 * [414] 第三大的数
 */

// @lc code=start


int cmp(const void* a,const void* b)
{
    return (*(int*)b) > (*(int*)a);
}

int thirdMax(int* nums, int numsSize){
    int i = 0;
    int ii = 0;
    int count = 0;
    int tmp;
    if(numsSize == 1)
    {
        return nums[0];
    }
    if(numsSize == 2)
    {
        return nums[0] > nums[1] ? nums[0] : nums[1];
    }
     //降序排好
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i = 1,tmp = nums[0]; i < numsSize;i++)
    {
        if(tmp > nums[i])
        {
            count++;
            if(count == 2)
            {
                ii = i;
                break;
            }
        }
        tmp = nums[i];
    }
    if(count < 2)
    {
        ii = 0;
    }
    return nums[ii];
}


// @lc code=end

