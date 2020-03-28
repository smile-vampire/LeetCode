/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
       if(root == nullptr)
        return 0;
       
       int left = minDepth(root->left);
       int right = minDepth(root->right);

       if(root->left == nullptr || root->right == nullptr)
       {
            return left == 0 ? right+1 : left+1;
       }
       else
       {
           return 1 + min(left,right); 
       }
       
    }
};
// @lc code=end

