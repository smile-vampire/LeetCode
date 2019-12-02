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
//插入链表元素 先构造一个新的带头空链表  让第一个放到新链表下一个
//然后从链表上取元素与之比较如果大的放到后面  小的插到前面
//新构造的链表要记录前一个值和每次更新的链表尾部
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

