unordered_map<string,bool>mp;
bool solve(string a,string b){
     if(a.length()!=b.length()) return false;
     if(a.compare(b)==0) return true;
     if(a.length()<=1) return false;
     string key=a;
     key.push_back(' ');
     key.append(b);
     int n=a.length();
     if(mp.find(key)!=mp.end()){
         return mp[key];
     }
     bool flag=false;
     for(int i=1;i<=n-1;i++){
         if((solve(a.substr(0,i),b.substr(n-i,i))==true && solve(a.substr(i,n-i),b.substr(0,n-i))==true) ||(solve(a.substr(0,i),b.substr(0,i))==true && solve(a.substr(i,n-i),b.substr(i,n-i))==true)){
             flag=true;
             break;
         }
     }
     return mp[key]=flag;
 }
 int Solution::isScramble(const string A, const string B) {
    return solve(A,B);
}
