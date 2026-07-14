class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int>left;
        if(root==NULL)  return left;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* curr=q.front();
                q.pop();
                if(i==0){
                    left.push_back(curr->data);
                }
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
               
            }
        }
        return left;
    }
};