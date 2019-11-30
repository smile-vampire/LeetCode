/*
 * @lc app=leetcode.cn id=147 lang=c
 *
 * [147] 对链表进行插入排序
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
struct ListNode* insertionSortList(struct ListNode* head){
    if(head==NULL || head->next==NULL)
        return head;
    
    Node* sortHead=(Node*)malloc(sizeof(Node));
    sortHead->next=head;
    head=head->next;
    sortHead->next->next=NULL;

    Node* cur=head;
    while(cur)
    {
        Node* next=cur->next;

        Node* sortprev=sortHead;
        Node* sortcur=sortHead->next;

        while(sortcur)
        {
            if(cur->val > sortcur->val)
            {
                sortprev=sortcur;
                sortcur=sortcur->next;
            }
            else
            {
                break;
            }
            
        }
        sortprev->next=cur;
        cur->next=sortcur;

        cur=next;
    }

    Node* sortlist=sortHead->next;
    free(sortHead);
    return sortlist;
}


// @lc code=end

