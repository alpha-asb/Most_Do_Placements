class Solution
{  
    private:
    void dfs(int node,vector<bool>&vis,vector<vector<int>>&adj,stack<int>&st){
        vis[node] = true;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,st);
            }
        }
        st.push(node);
    }
    void dfs2(int node,vector<int>adjT[],vector<bool>&vis){
        vis[node] = true;
        for(auto it:adjT[node]){
            if(!vis[it]){
                dfs2(it,adjT,vis);
            }
        }
    }
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        // step 1: sort the vertexs by finish time
        vector<bool>vis(V,false);
        stack<int>st;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,adj,st);
            }
        }
        // step 2: reverse the edges
        vector<int>adjT[V];
        for(int node =0;node<V;node++){
            vis[node] = false;
            for(auto it:adj[node]){
                adjT[it].push_back(node);
            }
        }
        //step 3: dfs
        
        int scc = 0;
        while(!st.empty()){
            int node = st.top();
            st.pop();
            if(!vis[node]){
                scc++;
                dfs2(node,adjT,vis);
            }
        }
        return scc;
    }
};
