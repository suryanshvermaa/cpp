#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
int v;
void add_edge(int src,int dest,bool bi_dir =true){
   graph[src].push_back(dest);
   if(bi_dir) {
    graph[dest].push_back(src);
   }
}
void dfs(int node,unordered_set<int> &visited){
    visited.insert(node);
    for(auto neighbor:graph[node]){
        if(!visited.count(neighbor)){
            dfs(neighbor,visited);
        }
    }
}
int connected_components(){
    unordered_set<int> visited;
    int components=0;
    for(int i=0;i<v;i++){
        //go to every vertex
        //if from a vertex we can initialize a dfd,we got one more conncted component
        if(!visited.count(i)){
            components++;
            dfs(i,visited);
        }

    }
    return components;
}

int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    cout<<connected_components()<<endl;
    return 0;
}