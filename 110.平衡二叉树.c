/*
 * @lc app=leetcode.cn id=110 lang=c
 *
 * [110] 平衡二叉树
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


bool isBalanced(struct TreeNode* root) {
        if (root==NULL) {
            return true;
        }
        int left = depth(root->left);
        int right = depth(root->right);
        if (abs(left-right) > 1) {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
    int depth(struct TreeNode *root) {
        if (root==NULL) {
            return 0;
        }
        int left = depth(root->left);
        int right = depth(root->right);
        return left>right?left+1:right+1;
    }


// @lc code=end

