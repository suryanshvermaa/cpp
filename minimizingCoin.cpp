#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> coins;
vector<int> dp;

//x is the required sum of coins
int f(int x){
   if(x==0) return 0;
   if(dp[x]!=-1) return dp[x];
   int result=INT_MAX;
   for(int i=0;i<coins.size();i++){
    if(x-coins[i]<0) continue;
    result=min(result,f(x-coins[i]));
   }
   if(result==INT_MAX ) return -1;
   return dp[x]=1+result;
}
int main(){
    int n, x;
    cin>>n>>x;
    dp.resize(x+1,-1);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        coins.push_back(num);
    }
    cout<<f(x)<<endl;
    return 0;
}