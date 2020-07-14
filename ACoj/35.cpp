//
// Created by 葛润泽 on 2020/7/8.
//
/*定义一个函数，输入一个链表的头结点，反转该链表并输出反转后链表的头结点。

思考题：

请同时实现迭代版本和递归版本。

样例

输入:1->2->3->4->5->NULL

输出:5->4->3->2->1->NULL
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
    ListNode* reverseList(ListNode* head) {
        ListNode* first=nullptr;
        ListNode* second=head;
        ListNode* third=nullptr;
        while(second!=nullptr)
        {
            third=second->next;
            second->next=first;
            first=second;
            second=third;
        }
        return first;
    }//
};
