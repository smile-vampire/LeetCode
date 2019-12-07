/*
 * @lc app=leetcode.cn id=268 lang=c
 *
 * [268] 缺失数字
 */

// @lc code=start

//位运算处理
//若果没有缺失从n个数异或的结果再异或这n个数为0
//但是如果缺了则异或结果为这个数
int missingNumber(int* nums, int numsSize){
    int num=numsSize;
    for(int i=0;i<numsSize;i++)
    {
        num^=i^nums[i];
    }
    return num;
}


// @lc code=end

