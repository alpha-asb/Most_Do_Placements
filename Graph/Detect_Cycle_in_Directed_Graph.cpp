class Solution {
  public:
    	
    	int topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>indeg(V);
	    for(int i=0;i<V;i++){
	        for(auto it:adj[i]){
	            indeg[it]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(indeg[i] == 0){
	            q.push(i);
	        }
	    }
	    int count = 0;
	    while(!q.empty()){
	        int top = q.front();
	        q.pop();
	        count++;
	        for(auto it:adj[top]){
	            indeg[it]--;
	            if(indeg[it] == 0){
	                q.push(it);
	            }
	        }
	    }
	    return count;
	}
    bool isCyclic(int V, vector<int> adj[]) {
       return topoSort(V,adj) != V; 
    }
};
