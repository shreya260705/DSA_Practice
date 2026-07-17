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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>>result;
        queue<TreeNode*>q;
        q.push(root);
        bool ltr=true;
        while(!q.empty()){
            int s=q.size();
            vector<int>level(s);
            for(int i=0;i<s;i++){
                TreeNode* temp=q.front();
                q.pop();
                int index=ltr?i:s-1-i;
                level[index]=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);

            }
            result.push_back(level);
            ltr=!ltr;
        }
        return result;

    }
};