#include<iostream>
#include<stack>
#include<cctype>
using namespace std;
int prefixeval(string s){
    stack<int>st;
    for(int i=s.size()-1;i>=0;i++){
        char ch=s[i];
        if(isdigit(ch)){
            st.push(ch-'0'); 
        }
        else{
            int a=st.top();  st.pop();
            int b=st.top(); st.pop();
            switch(ch){
            case '+':st.push (a+b); break;
            case '-':st.push (a-b); break;
            case '*':st.push (a*b); break;
            case '/':st.push (a/b); break;
            }

        }
    }
    return st.top();
}
int main(){
    string s="-+7+45+20";
    cout<<prefixeval(s)<<endl;
}


