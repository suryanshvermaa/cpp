#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
void add_edge(int src,int dest,bool bi_dir =true){
   graph[src].push_back(dest);
   if(bi_dir) {
    graph[dest].push_back(src);
   }
}

void dfs(int curr,int end,vector<int> &path){
    if(curr==end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);// mark visisted
    path.push_back(curr);
    for(auto neighbour:graph[curr]){
        if(!visited.count(neighbour)){
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
   return;
}
int allPAth(int src,int dest){
    vector<int> v;
     dfs(src,dest,v);
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
    allPAth(0,6);
    for(auto path:result){
        for(auto ele:path){
            cout<<ele<<"->";
        }
        cout<<endl;
    }

    return 0;
}