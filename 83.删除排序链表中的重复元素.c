/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;
struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==NULL)
    return NULL;
    Node* next=NULL;
    Node* cur=head;

    while(cur!=NULL && cur->next!=NULL)
    {
        if(cur->val==cur->next->val)
        {
            next=cur->next;
            cur->next=next->next;
            free(next);
        }
        else
        {
            cur=cur->next;
        }
        
    }
    return head;
}


// @lc code=end

