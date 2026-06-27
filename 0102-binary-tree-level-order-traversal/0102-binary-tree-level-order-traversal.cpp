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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        if(root==NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int lvl=q.size();
            vector<int> level;
            for(int i=0;i<lvl;i++){
                TreeNode* current=q.front();
                level.push_back(current->val);
                q.pop();
                if(current->left!=NULL) q.push(current->left);
                if(current->right!=NULL) q.push(current->right);
            }
            a.push_back(level);
        }
        return a;
    }
};