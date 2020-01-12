/*
 * @lc app=leetcode.cn id=989 lang=c
 *
 * [989] 数组形式的整数加法
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* A, int ASize, int K, int* returnSize){
    
    int* addRet = (int*)malloc(sizeof(int)*10001);
    //第i位
    int reti = 0;
    //从低位开始相加
    int ai = ASize-1;
    //进位
    int next = 0;

    while(ai>=0 || K>0)
    {
        int x1 = 0;
        //如果ai没有越界
        if(ai >= 0)
        {
            x1 = A[ai];
            --ai;
        }
        int x2 = 0;
        //如果K大于0，获取K的每一位
        if(K > 0)
        {
            x2 = K % 10;
            K = K / 10;
        }
        //对应位置相加  如果满足进位
        int ret = x1 + x2 + next;
        if(ret > 9)
        {
            ret = ret % 10;
            next = 1;
        }
        else
        {
            next = 0;
        }
        addRet[reti++] = ret;
    }
    if(next == 1)
    {
            addRet[reti++] = 1;
    }
    Reverse(addRet,0,reti-1);
    *returnSize = reti;
    return addRet;
}
void Reverse(int* nums,int left,int right)
{
    while(left < right)
    {
        int tmp = nums[left];
        nums[left++] = nums[right];
        nums[right--] = tmp;
    }
}



// @lc code=end

