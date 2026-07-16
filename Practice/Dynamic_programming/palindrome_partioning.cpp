#include<iostream>
#include <climits>
#include <cstring>
using namespace std;
bool ispalindrome(string &s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int dp[1001][1001];
int solve(string &s,int i,int j){
if(i>=j) return 0;
if(ispalindrome(s,i,j)) return 0;
int ans=INT_MAX;
if(dp[i][j]!=-1){ return dp[i][j];}
for(int k=i;k<=j-1;k++){
    int temp=1+solve(s,i,k)+solve(s,k+1,j);
    ans =min(ans,temp);
}
return dp[i][j]=ans;
}
int main() {
    memset(dp, -1, sizeof(dp));

    string s = "ababbbabbababa";

    cout << solve(s, 0, s.length() - 1);

    return 0;
}