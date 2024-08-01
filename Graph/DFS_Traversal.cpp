class Solution {
  public:
    void dfs(int vertex,vector<int>adj[],vector<int>&res,vector<bool>&visited){
        visited[vertex] = true;
        res.push_back(vertex);
        for(auto it:adj[vertex]){
            if(!visited[it]){
            dfs(it,adj,res,visited);
            }
        }
        return;
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>res;
        vector<bool>visited(V+1,false);
        dfs(0,adj,res,visited);
        return res;
    }
};
