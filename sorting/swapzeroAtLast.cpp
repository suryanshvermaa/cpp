#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,0,32,0,21,0,23,0};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
         
         for(int j=0;j<n-1-i;j++){
          if(arr[j]==0 && arr[j+1]!=0){
            int temp=arr[j+1];
            arr[j+1] = arr[j];
            arr[j]=temp;
           
          }
         }
      
         cout<<endl;
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}