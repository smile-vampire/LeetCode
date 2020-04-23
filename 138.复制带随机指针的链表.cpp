/*
 * @lc app=leetcode.cn id=138 lang=cpp
 *
 * [138] 复制带随机指针的链表
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};
*/
class Solution {
public:
  Node* copyRandomList(Node* head)
    {
        if (head == nullptr)
            return head;

        //遍历原链表 遍历过程中插入新副本节点
        Node* cur = head;
        while (cur)
        {
            Node* node = new Node(cur->val);
            Node* next = cur->next;
            node->next = next;
            cur->next = node;
            cur = next;
        }

        //遍历原链表 对新副本节点设置random指针
        cur = head;
        while (cur)
        {
            cur->next->random = cur->random ? cur->random->next : nullptr;
            cur = cur->next->next;
        }

        //分离出原链表与新副本链表
        cur = head;
        Node* new_cur = head->next;
        Node* res = new_cur;
        while (cur)
        {
            cur->next = cur->next->next;
            cur = cur->next;

            new_cur->next = cur ? cur->next : nullptr;
            new_cur = new_cur->next;
        }

        return res; //注意：不能再返回head->next了，head已经是分离后的原链表
    }
};


// @lc code=end

