/*
 * @lc app=leetcode.cn id=234 lang=c
 *
 * [234] 回文链表
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
bool isPalindrome(struct ListNode* head){
    Node* slow=head;
    Node* fast=head;
//快慢指针计算中点
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    Node* tail=NULL;
    Node* newhead=slow;
    //将链表后部分反转
    while(newhead)
    {
        Node* next=newhead->next;
        newhead->next=tail;
        tail=newhead;

        newhead=next;
    }
    Node* prev=tail;
//反转后的链表与之前的链表前部分比较
    while(prev)
    {
        if(head->val!=prev->val)
            return false;
        else
            prev=prev->next;
            head=head->next;
    }
    return true;
}


// @lc code=end

