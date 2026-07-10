#include <stack>
#include <iostream>
using namespace std;
void reverse(string str){
    stack <string>st;
    for(int i=0;i<str.length();i++){
        string ans= "";
        while(str[i]=' ' &&i<str.length()){
            ans+=str[i];
            i++;
        }
        st.push(ans);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
        cout<<endl;
    }
}
int main(){
    string s="hello world";
    reverse(s);
}