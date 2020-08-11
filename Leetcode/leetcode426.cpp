//
// Created by 葛润泽 on 2020/8/11.
//
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/

class Solution {
public:
    Node* head=nullptr;
    Node* pre=nullptr;
    Node* tail=nullptr;
    void f(Node* root)
    {
        if(root==nullptr)return;
        f(root->left);
        if(head==nullptr)
        {
            head=root;
            pre=root;
            tail=root;
        }
        else
        {
            pre->right=root;
            root->left=pre;
            pre=root;
            tail=root;
        }
        f(root->right);
    }
    Node* treeToDoublyList(Node* root) {
        if(root==nullptr)return nullptr;
        f(root);
        head->left=tail;
        tail->right=head;
        return head;
    }
};
