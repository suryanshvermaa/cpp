#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int donationCount=0;
    int coins=0;
    for(auto aI:arr){
        if(aI==0&&coins>0) {
            donationCount++;
            coins--;
        }else if(aI>=k){
            coins+=aI;
        }
    }
    cout<<"count of domation is: "<<donationCount;
    return 0;
}