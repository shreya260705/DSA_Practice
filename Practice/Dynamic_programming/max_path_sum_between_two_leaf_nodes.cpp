/* Node Structure
class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        left = nullptr;
        right = nullptr;
    }
}
*/

/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    int solve(Node* root, int &res) {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return root->data;

        int l = solve(root->left, res);
        int r = solve(root->right, res);

        if (root->left != NULL && root->right != NULL) {
            res = max(res, l + r + root->data);
            return root->data + max(l, r);
        }
        if (root->left == NULL)
            return root->data + r;
        else
            return root->data + l;
    }

    int maxPathSum(Node *root) {
        int res = INT_MIN;

        int val = solve(root, res);

        if (root->left == NULL || root->right == NULL)
            return max(res, val);

        return res;
    }
};