#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> pgi(vector<int> arr){
    stack<int> st;
    int n=arr.size();
    vector<int> newArr(n);
    for(int i=0;i<n;i++){
        while(st.size()>0&&arr[st.top()]<=arr[i]) st.pop();
        if(st.size()==0) newArr[i]=-1;
        else newArr[i]=st.top();
        st.push(i);
    }
    return newArr;
}
int main(){
    vector<int> stocks={100,80,60,70,60,75,85};
    vector<int> pgeArr=pgi(stocks);
    vector<int> stock_span(stocks.size());
    for(int i=0;i<stocks.size();i++){
        stock_span[i]=i-pgeArr[i];
    }
    for(int i=0;i<stocks.size();i++){
        cout<<stock_span[i]<<" ";
    }
    return 0;
}