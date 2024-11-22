#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    int n=s.length();
    stack<char> st;
    for(int i=0;i<n;i++){
        char currenBracket=s[i];
        if(currenBracket=='(') st.push(s[i]);
        if(currenBracket==')'){
            if(st.size()==0) return false; 
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string s;
    cin>>s;
    cout<<endl<<isBalanced(s);
    return 0;
}