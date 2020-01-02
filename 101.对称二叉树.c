/*
 * @lc app=leetcode.cn id=101 lang=c
 *
 * [101] 对称二叉树
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

bool _isSymmetric(struct TreeNode* p,struct TreeNode* q){
    if(p==NULL && q==NULL)
        return true;
    if(p==NULL || q==NULL)
        return false;
    if(p->val == q->val)
        return _isSymmetric(p->left,q->right) &&    
            _isSymmetric(p->right,q->left);
    return false;

}
bool isSymmetric(struct TreeNode* root){
    return _isSymmetric(root,root);
}


// @lc code=end

