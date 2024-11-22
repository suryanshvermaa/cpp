#include<iostream>
#include<stack>
#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string& s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char currenChar=s[i];
        if(st.size()>0&& st.top()==s[i]) continue;
        else st.push(s[i]);
    }
    string newStr="";
    while (st.size()>0)
    {
        char c=st.top();
        st.pop();
        newStr+=c;
    }
    
    reverse(newStr.begin(),newStr.end());
    return newStr;
}
int main(){
    string s;
    cout<<"Enter string:";
    cin>>s;
    cout<<removeDuplicates(s);
    return 0;
}