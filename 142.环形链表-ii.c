/*
 * @lc app=leetcode.cn id=142 lang=c
 *
 * [142] 环形链表 II
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
struct ListNode *detectCycle(struct ListNode *head) {
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            Node* meet=slow;
            Node* start=head;
            while(start!=meet)
            {
                start=start->next;
                meet=meet->next;
            }
            return meet;
        } 
    }
    return NULL;
}
// @lc code=end

