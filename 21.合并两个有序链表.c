/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//解题思路：创建一个有头的新节点
//如果l1为空返回l2，l2为空返回l1
//l1和l2比较谁小先拿下来，拿下来的一个向后继续走一部，每次只比较一个
//当同时比完  或者一个先完  把较长的连到最后  最后返回新的结点
typedef struct ListNode Node;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    Node* head=NULL,*tail=NULL;
    head=tail=(Node*)malloc(sizeof(Node));
    if(l1==NULL)
    {
        return l2;
    }
    else if(l2==NULL)
    {
        return l1;
    }
    while(l1 && l2)
    {
        //选择较小的插入
        if(l1->val < l2->val)
        {
            tail->next=l1;
            tail=tail->next;
            l1=l1->next;
        }
        else
        {
            tail->next=l2;
            tail=tail->next;
            l2=l2->next;
        }  
    }
    if(l1)
    {
        tail->next=l1;
    }
    else
    {
        tail->next=l2;
    }
    Node* list=head->next;
    free(head);
    return list;
}


// @lc code=end

