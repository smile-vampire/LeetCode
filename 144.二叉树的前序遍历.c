/*
 * @lc app=leetcode.cn id=144 lang=c
 *
 * [144] 二叉树的前序遍历
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
//先序遍历根、左、右
//把只要保存在数组中，首先要知道数组大小即而二叉树大小
int TreeSize(struct TreeNode* root)
{
    if(root == NULL)
        return 0;
    return TreeSize(root->left)+TreeSize(root->right)+1;
}
//前序遍历二叉树
void _preorderTraversal(struct TreeNode* root,int* a,int* pi)
{
    if(root == NULL)
        return;
    //root不为空先保存下来
    a[*pi] = root->val;
    ++*pi;
    _preorderTraversal(root->left,a,pi);
    _preorderTraversal(root->right,a,pi);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int size = TreeSize(root);
    int* a = (int*)malloc(sizeof(int)*size);
    int i=0;
    _preorderTraversal(root,a,&i);
    *returnSize=size;
    return a;
}


// @lc code=end

