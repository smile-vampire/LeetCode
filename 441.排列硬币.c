/*
 * @lc app=leetcode.cn id=441 lang=c
 *
 * [441] 排列硬币
 */

// @lc code=start


int arrangeCoins(int n){
    int left=0;
    int right=n;
    while(left<=right)
    {
        long mid=left+(right-left)/2;
        long int sum=mid*(1+mid)/2;
        if(sum==n)
            return mid;
        else if(sum>n)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return right;
}

// @lc code=end

