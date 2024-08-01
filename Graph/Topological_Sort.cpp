class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
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
	    vector<int>res;
	    while(!q.empty()){
	        int top = q.front();
	        q.pop();
	        res.push_back(top);
	        for(auto it:adj[top]){
	            indeg[it]--;
	            if(indeg[it] == 0){
	                q.push(it);
	            }
	        }
	    }
	    return res;
	}
};
