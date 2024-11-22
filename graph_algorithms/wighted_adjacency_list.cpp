#include<iostream>
#include<list>
#include<vector>
using namespace std;
vector<list<pair<int,int>>> graph;
int v;//number of vertices
void add_edge(int src,int dest,int weight,bool bi_dir =true){
   graph[src].push_back({dest,weight});
   if(bi_dir) {
    graph[dest].push_back({src,weight});
   }
}
void display(){
    for(int i=0;i< graph.size();i++){
        cout<<i<<"->";
        for(auto el:graph[i]){
            cout<<"{"<<el.first<<","<<el.second<<"}"<<",";
        }
        cout<<endl;
    }
}
int main(){
    cin>>v;
    graph.resize(v,list<pair<int,int>> ());
    int e;
    cin>>e;
    while(e--){
        int s,d,w;
        cin>>s>>d>>w;
        add_edge(s,d,w);
    }
    display();
    return 0;
}