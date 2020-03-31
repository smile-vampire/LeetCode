/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto curA = headA, curB = headB;
        int countA = 0, countB = 0;
        while(curA)
        {
            curA = curA->next;
            countA++;
        }
        while(curB)
        {
            curB = curB->next;
            countB++;
        }
        int dif = std::abs(countA - countB);
        if(countA < countB)
        {
            swap(headA, headB);
        }
        while(dif--)
       {
           headA = headA->next;
       }
       while(headA != headB)
       {
           headA = headA->next;
           headB = headB->next;
       }
       return headA;
    }
};
// @lc code=end

