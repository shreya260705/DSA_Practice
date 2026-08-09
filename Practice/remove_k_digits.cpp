class Solution {
public:
    string remove_front_zeroes(string num){
        string ans = "" ;
        bool a = 0 ;
        for(int i=0;i<num.length();i++){
          if(num[i]!='0'){
            a =1 ;
          }
          if(a ){
           ans.push_back(num[i]) ;
          }
          else if(num[i]!='0'){
           ans.push_back(num[i]) ;
          }
        }
        return ans ;
    }
    string removeKdigits(string num, int k) {
    string ans = "" ;
    for(int i=0;i<num.length();i++){
     while(ans.length()!=0 && ans[ans.length()-1]>num[i] && k!=0){
        ans.pop_back() ;
        k-- ;
     } 

     ans.push_back(num[i]) ;

    }
       if(k!=0) ans = ans.substr(0,ans.length()-k) ;
       string res = remove_front_zeroes(ans) ;
       if(res=="")return "0" ;
       return res; 
    }
};