/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//本题思路：利用前插  建立新的头结点为NULL 然后用cur遍历
//用next 记录cur的下一个节点 
//记得每次newhead改变 扦插一个再让cur指向next直到遍历一遍结束
typedef struct ListNode Node;
struct ListNode* reverseList(struct ListNode* head){
    Node* cur=head;
    Node* newhead=NULL;

    while(cur)
    {
        Node* next=cur->next;

        cur->next=newhead;

        newhead=cur;
        cur=next;
    }
    return newhead;
}


// @lc code=end

