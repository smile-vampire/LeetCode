/*
 * @lc app=leetcode.cn id=965 lang=c
 *
 * [965] 单值二叉树
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

//递归调用  每部分在不为空的情况下比较根和左子树、右子树值是否相同
bool isUnivalTree(struct TreeNode* root){
    if(root == NULL)
        return true;
    else if(root->left && root->val != root->left->val)
        return false;
    else if(root->right && root->val != root->right->val)
        return false;
    return isUnivalTree(root->left) && isUnivalTree(root->right);
}


// @lc code=end

