class Solution{
    private:
    string Toposort(vector<int>adj[],int V){
        vector<int>indeg(V,0);
        for(int i =0;i<V;i++){
            for(auto it: adj[i]){
                indeg[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        string res = "";
        while(!q.empty()){
           int node = q.front();
           res = res + char(node + 'a');
           q.pop();
           for(auto it:adj[node]){
               indeg[it]--;
               if(indeg[it] == 0){
                   q.push(it);
               }
           }
        }
        return res;
    }
    public:
    string findOrder(string dict[], int N, int K) {
        vector<int>adj[K];
       for(int i =0;i<N-1;i++){
           string s1 = dict[i];
           string s2 = dict[i+1];
           int len = min(s1.size(),s2.size());
           for(int ptr = 0;ptr < len;ptr++){
               if(s1[ptr] != s2[ptr]){
                   adj[s1[ptr]-'a'].push_back(s2[ptr]-'a');
                   break;
               }
           }
       }
           string res  = Toposort(adj,K);
           return res;
    }
};
