#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> pGE(vector<int> arr){
    stack<int> st;
    int n=arr.size();
    vector<int> newArr(n);
    for(int i=0;i<n;i++){
        while(st.size()>0&&st.top()<=arr[i]) st.pop();
        if(st.size()==0) newArr[i]=-1;
        else newArr[i]=st.top();
        st.push(arr[i]);
    }
    return newArr;
}
int main(){
    vector<int> arr={3,1,2,5,4,6,2,3};
    vector<int> pgeArr=pGE(arr);
    for(auto el:pgeArr){
        cout<<el<<" ";
    }
    return 0;
}