#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
   unordered_set<int> s;
   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(4);
   s.insert(5);
   s.insert(6);
   //for each loop
   for( int ele : s){
    cout<<ele<<" ";
   }
   cout<<endl<<s.size()<<endl;
   //searches element if not found returns last element
   cout<<"Enter Target elemet"<<endl;
   int target;
   cin>>target;
   if(s.find(target)!=s.end()){
    cout<<"Target exists";
   }else{
     cout<<"Target not exists";
   }

}