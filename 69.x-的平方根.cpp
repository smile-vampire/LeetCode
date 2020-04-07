/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long long int left = 0;
        long long int right = x/2 + 1;
        while(left <= right)
        {
            long long int mid = left + (right - left)/2;
            long long ans = mid * mid;
            if(ans == x)
            {
                return mid;
            } 
            else if(ans > x)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return right;
    }
};
// @lc code=end

