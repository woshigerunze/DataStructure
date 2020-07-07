//
// Created by 葛润泽 on 2020/7/8.
//
在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留。

样例1

输入：1->2->3->3->4->4->5
输出：1->2->5

样例2

输入：1->1->1->2->3
输出：2->3
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
    ListNode* deleteDuplication(ListNode* head) {
        if(head==nullptr)return nullptr;
        ListNode* newhead=new ListNode(-1);
        newhead->next=head;
        ListNode* work=newhead;
        while(work->next!=nullptr&&work->next->next!=nullptr)
        {
            if(work->next->val==work->next->next->val)
            {
                ListNode* temp=work->next;
                int val=temp->val;
                while(temp!=nullptr&&temp->val==val)temp=temp->next;
                work->next=temp;
            }
            else work=work->next;
        }
        return newhead->next;
    }
};
