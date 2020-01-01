/*
 * @lc app=leetcode.cn id=145 lang=c
 *
 * [145] 二叉树的后序遍历
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
    return TreeSize(root->left)+TreeSize(root->right)+1;
}
void _postorderTraversal(struct TreeNode* root, int* a,int* i){
    if(root == NULL)
        return;
    _postorderTraversal(root->left,a,i);
    _postorderTraversal(root->right,a,i);
    a[*i] = root->val;
    ++*i;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize){
    int size = TreeSize(root);
    int* a = (int*)malloc(sizeof(int)*size);
    int i =0;
    _postorderTraversal(root,a,&i);
    *returnSize = size;

    return a;
}

// @lc code=end

