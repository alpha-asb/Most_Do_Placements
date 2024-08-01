class Solution {
  public:
    bool Detect_Cycle(int src,vector<bool>&visited,vector<int> adj[],int parent){
        visited[src] = true;
        for(int it:adj[src]){
            if(!visited[it]){
               if (Detect_Cycle(it, visited, adj, src)) {
                    return true;
                }
            }
            else if(it != parent){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(Detect_Cycle(i,visited,adj,-1)){
                    return true;
                }
            }
        }
        return false;
    }
};
