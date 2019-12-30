/*
 * @lc app=leetcode.cn id=572 lang=c
 *
 * [572] 另一个树的子树
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

bool _isSubtree(struct TreeNode* s, struct TreeNode* t)
{
    if(s == NULL && t != NULL)
        return false;
    else if(s != NULL && t == NULL)
        return false;
    else if(s == NULL && t == NULL)
        return true;
    if(s->val != t->val)
        return false;
    return _isSubtree(s->left,t->left) && _isSubtree(s->right,t->right);
}
bool isSubtree(struct TreeNode* s, struct TreeNode* t){
    if(s == NULL)
        return false;
    if(_isSubtree(s,t))
    {
        return true;
    }
    bool left = isSubtree(s->left,t);
    bool right = isSubtree(s->right,t);

    return left||right;
}


// @lc code=end

