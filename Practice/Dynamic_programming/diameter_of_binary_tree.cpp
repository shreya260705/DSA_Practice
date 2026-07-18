class Solution {
  public:
    int solve(Node* root,int &res){
        if(root==NULL) return 0;
        int l=solve(root->left,res);
        int r=solve(root->right,res);
        int temp=1+max(l,r);
        int ans=l+r;
        res=max(res,ans);
        return temp;
    }
    int diameter(Node* root) {
        // code here
        int res=INT_MIN;
        solve(root,res);
        return res;
        
    }
};