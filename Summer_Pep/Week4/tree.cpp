#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
void inorder(Node* root){
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
   
}
int count(Node* root){
    if(root==NULL) return  0;
    return count(root->left)+count(root->right)+1;
}
int countleaf(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return countleaf(root->left)+countleaf(root->right);
}
vector<vector<int>> levelOrder(TreeNode* root) {
           vector<vector<int>> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> level;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* current = q.front();
                q.pop();
                level.push_back(current->val);

                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }

            result.push_back(level);
        }

        return result;
    }
int main() {


    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}