/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 求众数
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ret = nums[nums.size()/2];

        int count = 0;
        for(int i= 0; i < nums.size(); i++)
        {
            if(ret == nums[i])
                count++;
            else
                count--;
            
        }
        if(count > 0)
            return ret;
        else
            return 0;
        
    }
};
// @lc code=end

