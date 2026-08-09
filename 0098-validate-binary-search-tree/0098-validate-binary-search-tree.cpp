/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isvalid(TreeNode* root, long long min, long long max){
        
        TreeNode* curr = root;
        if(curr==NULL) return true;
        if(curr->val <= min || curr->val >=max) return false;
        bool left = isvalid(curr->left,min, curr->val);
        bool right =  isvalid(curr->right, curr->val, max);
        return right&&left;
    }
    bool isValidBST(TreeNode* root) {
        return isvalid( root, LLONG_MIN, LLONG_MAX);
        
    }
};