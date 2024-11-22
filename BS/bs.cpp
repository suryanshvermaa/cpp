#include<iostream>
using namespace std;
int binarySearchIdx(int arr[],int n,int size){
   int hi=0;
   int lo=size-1;

  while(lo<=hi){
     int mid=(hi+lo)/2;
     if(arr[mid]==n) return mid;
     if(arr[mid]<n) lo=mid+1;
     if(arr[mid]>n) hi=mid-1;
  }
  return -1;
}
int main(){
    int arr[]={1,2,3,4,5,7,8,9,11,23};
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<<binarySearchIdx(arr,n,10);
}