class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int>dist(V,INT_MAX);
        queue<int>q;
        vector<bool>visited(V,false);
        dist[S] = 0;
        q.push(S);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto vertex:adj[node]){
                int adjNode = vertex[0];
                int weight = vertex[1];
                if(dist[node] + weight < dist[adjNode]){
                    dist[adjNode] = dist[node] + weight;
                    q.push(adjNode);
                }
            }
            
        }
        return dist;
    }
};
