/*
 * @lc app=leetcode.cn id=119 lang=c
 *
 * [119] 杨辉三角 II
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    int* row = malc((rowIndex+1)*sizeof(int));
    *returnSize = rowIndex+1;


    int num = rowIndex+1;
    if(rowIndex<1)
    {
        row[0]=1;
        return row;
    }

    int i,j;
    for(i=1;i<=rowIndex;i++)
    {
        num=i+1;
        row[0]=1;
        row[num-1]=1;
        for(j=num-2;j>=1;j--)
        {
            row[j]=row[j-1]+row[j];
        }
    }
    return row;
} 


// @lc code=end

