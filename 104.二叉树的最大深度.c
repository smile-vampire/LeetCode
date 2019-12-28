/*
 * @lc app=leetcode.cn id=104 lang=c
 *
 * [104] 二叉树的最大深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if(root == NULL)
        return 0;
    int maxdeoth1 = maxDepth(root->left);
    int maxdeoth2 = maxDepth(root->right);
    return maxdeoth1 > maxdeoth2 ? maxdeoth1+1 : maxdeoth2+1;
}


// @lc code=end

