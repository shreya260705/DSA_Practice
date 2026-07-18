class Solution {
  public:
  int dp[1001][1001][2];
  int solve(string &s,int i,int j,bool istrue){
      if(i>j) return 0;
      if (i==j){
          if(istrue==true){
              return s[i]=='T';
          }
          else{
              return s[i]=='F';
          }
  }
  if(dp[i][j][istrue]!=-1){
      return dp[i][j][istrue];
  }
  int ans=0;
  for(int k=i+1;k<=j-1;k+=2){
      int lf=solve(s,i,k-1,false);
      int lt=solve(s,i,k-1,true);
      int rf=solve(s,k+1,j,false);
      int rt=solve(s,k+1,j,true);
      if(s[k]=='&'){
          if(istrue==true){
              ans+=lt*rt;
          }
          else{
              ans+=lf*rf+lf*rt+lt*rf;
          }
      }
       if(s[k]=='|'){
          if(istrue==true){
              ans+=lt*rt+lf*rt+lt*rf;
          }
          else{
              ans+=lf*rf;
          }
      }
       if(s[k]=='^'){
          if(istrue==true){
              ans+=lt*rf+lf*rt;
          }
          else{
              ans+=lf*rf+lt*rt;
          }
      }
  }
  return dp[i][j][istrue]=ans;
      
  }
    int countWays(string &s) {
        // code here
       memset(dp,-1,sizeof(dp));
       return solve(s,0,s.size()-1,true);
        
    }
};