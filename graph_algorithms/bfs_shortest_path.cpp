#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
#include<climits>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;
void add_edge(int src,int dest,bool bi_dir =true){
   graph[src].push_back(dest);
   if(bi_dir) {
    graph[dest].push_back(src);
   }
}

void bfs(int src,vector<int> &distance){
    queue<int> qu;
    visited.clear();
    distance.resize(v,INT_MAX);
    qu.push(src);
    distance[src]=0;
    visited.insert(src);
    while(!qu.empty()){
        int curr=qu.front();
        qu.pop();
        for(auto neighbour:graph[curr]){
            if(!visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                distance[neighbour]=distance[curr]+1;
            }
        }
    }
    
}

int main(){
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
    vector<int> dist;
    bfs(0,dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }

    return 0;
}