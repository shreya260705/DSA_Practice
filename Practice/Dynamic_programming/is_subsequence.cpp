class Solution {
public:
    // bool issub(string s, string t,int m,int n){
    //     if (m==0) return true;
    //     if(n==0) return false;
    //     if(s[m-1]==t[n-1]) return issub(s,t,m-1,n-1);
    //     else{
    //         return issub(s,t,m,n-1);
    //     }
    // }
    // bool isSubsequence(string s, string t) {
    //     if(issub(s,t,s.length(),t.length())){
    //         return true;
    //     }
    //     return false;
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        vector<vector<bool>>dp(m+1,vector<bool>(n+1,false));
        for(int j=0;j<=n;j++){
            dp[0][j]=true;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
        return dp[m][n];
    }
};