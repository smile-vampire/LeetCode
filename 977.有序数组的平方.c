/*
 * @lc app=leetcode.cn id=977 lang=c
 *
 * [977] 有序数组的平方
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize){
    int j = 0;
    while(j < ASize && A[j] < 0)
    {
        j++;
    }
    int i = j -1;

    int* ans = (int*)malloc(sizeof(int)*ASize);
    int k = 0;
    while(i >= 0 && j < ASize)
    {
        if(A[i]*A[i] < A[j]*A[j])
        {
            ans[k++] = A[i]*A[i];
            i--;
        }
        else
        {
            ans[k++] = A[j]*A[j];
            j++;
        }
    }
    while(i >= 0)
    {
        ans[k++] = A[i] * A[i];
        i--;
    }
    while(j < ASize)
    {
        ans[k++] = A[j]*A[j];
        j++;
    }
    *returnSize = ASize;
    return ans;
}


// @lc code=end

