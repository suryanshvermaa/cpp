#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="Suryansh";
    p1.second=20;
    m.insert(p1);
    m["saurabh"]=19;
    m["Rishabh"]=21;
    m["akash"]=20;    
    // for(pair<string,int> p: m){
    //      cout<<p.first<<" "<<p.second<<endl;
    // }
     for(auto p: m){
         cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    m.erase("akash");
      for(auto p: m){
         cout<<p.first<<" "<<p.second<<endl;
    }



}