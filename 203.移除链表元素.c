/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode ListNode;
struct ListNode* removeElements(struct ListNode* head, int val){
        ListNode* cur = head;
        ListNode* newhead = (ListNode*)malloc(sizeof(ListNode));
        newhead->next = NULL;
        ListNode* newtail = newhead;
        while(cur)
        {
           
            ListNode* next = cur->next;
            if(cur->val == val)
            {
                free(cur);
                cur = next;
            }
            else
            {
                newtail->next = cur;
                newtail = cur;
                newtail->next=NULL;
                cur = next;
                
            }
        }
        ListNode* list = newhead->next;
        free(newhead);
        return list; 
}


// @lc code=end

