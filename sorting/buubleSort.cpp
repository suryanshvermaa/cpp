#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,6,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    // for(int i=0;i<n-1;i++){
    //    for(int j=0;j<n-1-i;j++){
    //     if(arr[j]>arr[j+1]){
    //         int temp=arr[j];
    //         arr[j]=arr[j+1];
    //         arr[j+1]=temp;
    //     }
    //    }
    // }

    //optimised bubble sort
    for(int i=0;i<n-1;i++){
         bool flag=true;
         for(int j=0;j<n-1-i;j++){
          if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1] = arr[j];
            arr[j]=temp;
            flag=false;
          }
         }
         if(flag){
          break;
         }
         cout<<endl;
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}