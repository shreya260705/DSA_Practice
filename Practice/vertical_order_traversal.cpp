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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            TreeNode* curr=q.front().first;

            int col=q.front().second.first;
            int row=q.front().second.second;
            mp[col][row].push_back(curr->val);
            q.pop();
            if(curr->left){
                q.push({curr->left,{col-1,row+1}});
            }
            if(curr->right){
                q.push({curr->right,{col+1,row+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto col:mp){
            vector<int>v;
            for(auto row:col.second){
                sort(row.second.begin(),row.second.end());
                for(int x:row.second){
                    v.push_back(x);
                }
            }
            ans.push_back(v);

        }
        return ans;
    }
};