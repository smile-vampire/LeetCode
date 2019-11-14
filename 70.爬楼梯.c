/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

// @lc code=start


int climbStairs(int n){
  	int j1 = 1;
	int j2 = 2;
	int j3 = 0;
	int i = 0;
	if (n == 1 || n == 2)
	{
		return n;
	}
	for (i = 3; i <= n; i++)
	{
		j3 = j1 + j2;
		j1 = j2;
		j2 = j3;
	}
	return j3;
}


// @lc code=end

