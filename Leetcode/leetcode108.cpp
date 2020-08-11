//
// Created by 葛润泽 on 2020/8/11.
//

  //Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
class Solution {
public:
    TreeNode* ArrayToBST(vector<int> nums,int left,int right)
    {
        if(right<=left)return nullptr;
        int mid=(left+right)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=ArrayToBST(nums,left,mid);
        root->right=ArrayToBST(nums,mid+1,right);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return ArrayToBST(nums,0,nums.size());
    }
};
