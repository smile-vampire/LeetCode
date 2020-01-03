/*
 * @lc app=leetcode.cn id=404 lang=c
 *
 * [404] 左叶子之和
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


int sumOfLeftLeaves(struct TreeNode* root){
    if(root == NULL)
        return 0;
    if(root->left && root->left->left == NULL && root->left->right ==NULL)
        return root->left->val + sumOfLeftLeaves(root->right);
    else 
        return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
}


// @lc code=end

