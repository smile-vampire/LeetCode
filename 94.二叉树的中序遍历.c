/*
 * @lc app=leetcode.cn id=94 lang=c
 *
 * [94] 二叉树的中序遍历
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


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int TreeSize(struct TreeNode* root)
 {
    if(root == NULL)
        return 0;
    return TreeSize(root->left) + TreeSize(root->right) +1;
 }
 void _inorderTraversal(struct TreeNode* root,int* a,int* pi)
 {  
     if(root == NULL)
        return;


     _inorderTraversal(root->left,a,pi);
     a[*pi] = root->val;
     ++*pi;
     _inorderTraversal(root->right,a,pi);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int size = TreeSize(root);
    int* a = (int*)malloc(sizeof(int)*size);
    int i = 0;
    _inorderTraversal(root,a,&i);
    *returnSize = size;

    return a;
}


// @lc code=end

