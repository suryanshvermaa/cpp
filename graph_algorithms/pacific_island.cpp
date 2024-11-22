#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int r=heights.size();
        int c=heights[0].size();
        queue<pair<int,int>> pacificOcean;
        queue<pair<int,int>> atlanticOcean;
        for(int i=0;i<r;i++){
            pacificOcean.push({i,0});
            atlanticOcean.push({i,c-1});
        }
        for(int j=1;j<c;j++){
          pacificOcean.push({0,j});
        }
        for(int j=0;j<c-1;j++){
          atlanticOcean.push({r-1,j});
        }
        vector<vector<bool>> atlanticVisited= bfs(heights,atlanticOcean);
        vector<vector<bool>> pacificVisited= bfs(heights,pacificOcean);
        vector<vector<int>> result;
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(atlanticVisited[i][j]&&pacificVisited[i][j]) result.push_back({i,j});
            }
         }

      return result;
    }
    vector<vector<bool>> bfs(vector<vector<int>>& heights,queue<pair<int,int>> &qu){
      
        int r=heights.size();
        int c=heights[0].size();
        vector<vector<bool>> visited(r,vector<bool> (c,false));
        while(!qu.empty()){
              auto curr=qu.front();
              qu.pop();
              int cr=curr.first;
              int cc=curr.second;
              visited[cr][cc]=true;
           
            if(cr-1>=0&&visited[cr-1][cc]==false&&heights[cr-1][cc]>=heights[cr][cc]){
                qu.push({cr-1,cc});
            }
            if(cr+1<r&&visited[cr+1][cc]==false&&heights[cr+1][cc]>=heights[cr][cc]){
                qu.push({cr+1,cc});
            }
            if(cc-1>=0&&visited[cr][cc-1]==false&&heights[cr][cc-1]>=heights[cr][cc]){
                qu.push({cr,cc-1});
            }
            if(cc+1<c&&visited[cr][cc+1]==false&&heights[cr][cc+1]>=heights[cr][cc]){
                qu.push({cr,cc+1});
            }
        }
        return visited;
    }
};