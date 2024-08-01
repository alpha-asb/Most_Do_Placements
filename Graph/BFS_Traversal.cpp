class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int>q;
        vector<int>res;
        vector<bool>visited(V+1,false);
        visited[0] = true;
        q.push(0);
        while(!q.empty()){
            int temp = q.front();
            res.push_back(temp);
            q.pop();
            for(auto it:adj[temp]){
               if(!visited[it]){
                   visited[it] = true;
                   q.push(it);
               }
            }
        }
        return res;
    }
};
