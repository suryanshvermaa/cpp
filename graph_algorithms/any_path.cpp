#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
void add_edge(int src,int dest,bool bi_dir =true){
   graph[src].push_back(dest);
   if(bi_dir) {
    graph[dest].push_back(src);
   }
}

bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr);// mark visisted
    for(auto neighbour:graph[curr]){
        if(!visited.count(neighbour)){
            bool result=dfs(neighbour,end);
            if(result) return true;
        }
    }
   return false;
}
int anyPath(int src,int dest){
    return dfs(src,dest);
}
int main(){
    int v;
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    cout<<anyPath(0,6);

    return 0;
}