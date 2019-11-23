/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
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
bool hasCycle(struct ListNode *head) {
    if(head==NULL||head->next==NULL)
    {
        return false;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        if(slow->next == fast->next)
        {
            return true;
        }
        else
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    }
    return false;
}
// @lc code=end

