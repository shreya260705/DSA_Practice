#include<bits/stdc++.h>
using namespace std;
//reverse string using two pointer

string reverses(string s){
    int start=0;
    int end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}
int main(){
    string str="Hello";
    string ans=reverses(str);
    cout<<ans;
    return 0;
}