class Solution
{
    private:
    void dfs(int src,vector<int>adj[],vector<bool>&vis){
        vis[src] = 1;
        for(auto it:adj[src]){
            if(vis[it] != 1){
                dfs(it,adj,vis);
            }
        }
    }
    public:
    int isCircle(int N, vector<string> A)
    {
        vector<int>adj[26],indeg(26,0),outdeg(26,0);
        for(int i=0;i<N;i++){
            int u = A[i][0] - 'a';
            int v = A[i][A[i].size()-1]-'a';
            adj[u].push_back(v);
            indeg[v]++;
            outdeg[u]++;
        }
        // eulerian circuit
        for(int i=0;i<26;i++){
            if(indeg[i] != outdeg[i])
               return 0;
        }
        vector<bool>vis(26,0);
        dfs(A[0][0]-'a',adj,vis);
        
        for(int i=0;i<26;i++){
            if(indeg[i] && !vis[i])
             return 0;
        }
        return 1;
    }
};
