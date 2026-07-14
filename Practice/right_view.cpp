class Solution {
  public:
    vector<int> rightView(Node *root) {
        //  code here
        vector<int>right;
        if(root==NULL)  return right;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* curr=q.front();
                q.pop();
                if(i==0){
                    right.push_back(curr->data);
                }
                
                if(curr->right) q.push(curr->right);
                if(curr->left) q.push(curr->left);
            }
        }
        return right;
    }
};