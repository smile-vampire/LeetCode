/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child = 0;
        int cookie = 0;
        int nchild = g.size();
        int ncookie = s.size();
        int ans = 0;
        while(child<nchild && cookie<ncookie)
        {
            if(g[child] <= s[cookie])
            {
                ans++;
                child++;
            }
            cookie++;
        }
        return ans;
    }
};
// @lc code=end

