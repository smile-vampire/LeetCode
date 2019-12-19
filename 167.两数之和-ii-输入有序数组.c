/*
 * @lc app=leetcode.cn id=167 lang=c
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int i=0,j=numbersSize-1;
    while(i<j)
    {
        int diff = target-numbers[i];
        if(diff<numbers[j])
        {
            while(i<--j && numbers[j+1]==numbers[j])
            {}
        }
        else if(diff>numbers[j])
        {
            while(++i<j && numbers[i-1]==numbers[i])
            {}
        }
        else
        {
            *returnSize = 2;
            int* indexes = malloc(*returnSize*sizeof(int));
            indexes[0]=i+1;
            indexes[1]=j+1;
            return indexes;
        }  
    }
    *returnSize = 0;
    return NULL;
}


// @lc code=end

