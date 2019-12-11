/*
 * @lc app=leetcode.cn id=461 lang=c
 *
 * [461] 汉明距离
 */

// @lc code=start


int hammingDistance(int x, int y){
    int num=x^y;
    int count=0;
    while(num)
    {
        ++count;
        num=num&(num-1);
    }
    return count;
}


// @lc code=end

