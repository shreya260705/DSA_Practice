int Lcs(string s, string y, int n, int m){
    if(n==0 || m==0){
        return 0;
    }
    if(s[n-1]==y[m-1]){
        return 1+Lcs(s,y,n-1,m-1);
    }
    else{
        return max(Lcs(s,y,n,m-1),Lcs(s,y,n-1,m));
    }
}