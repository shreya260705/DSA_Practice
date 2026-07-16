// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<vector<int>> pathSum(TreeNode* root, int sum) {
//         vector<vector<int> > paths;
//         vector<int> path;
//         findPaths(root, sum, path, paths);
//         return paths;  
//     }
// private:
//     void findPaths(TreeNode* node, int sum, vector<int>& path, vector<vector<int> >& paths) {
//         if (!node) return;
//         path.push_back(node -> val);
//         if (!(node -> left) && !(node -> right) && sum == node -> val)
//             paths.push_back(path);
//         findPaths(node -> left, sum - node -> val, path, paths);
//         findPaths(node -> right, sum - node -> val, path, paths);
//         path.pop_back();
//     }
// };  



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
vector<vector<int>>ans;
vector<int>path;
    void paths(TreeNode* root,int targetSum){
        if(root==NULL){
            return;
        }
        path.push_back(root->val);
        targetSum-=root->val;
        if(root->left==NULL && root->right==NULL && targetSum==0){
            ans.push_back(path);
        }
        paths(root->left,targetSum);
        paths(root->right,targetSum);
        path.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       paths(root,targetSum);
       return ans;

    }
};