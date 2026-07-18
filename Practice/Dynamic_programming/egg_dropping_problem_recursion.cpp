class Solution {
  public:
    
    int eggDrop(int n, int k) {
        // code here
        if(n==1) return k;
        if(k==0 || k==1) return k;
        int ans=INT_MAX;
        for(int j=1;j=k;j++){
            int temp=1+max(eggDrop(n-1,j-1),eggDrop(n,k-j));
            ans=min(ans,temp);
        }
        return ans;
    }
};