class Solution{
public:
    int minThrow(int N, int arr[]){
        vector<int>moves(35,-1);
        vector<bool>vis(35,0);
        
        for(int i=0;i<2*N;i+=2){
            moves[arr[i]] = arr[i+1];
        }
        
        queue<pair<int,int>>q;
        q.push({1,0});
        vis[1] = 1;
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            int node = p.first;
            int move = p.second;
            if(node == 30){
                return move;
            }
            for(int i = node+1;i<= node+6 && i<=30;i++){
                int curr_move,curr_node;
                if(!vis[i]){
                    curr_move = move+1;
                    vis[i] = 1;
                    
                    // check for snake / ladder
                    if(moves[i] != -1){
                        curr_node = moves[i];
                    }
                    else{
                        curr_node = i;
                    }
                    q.push({curr_node,curr_move});
                }
            }
        }
        return 0;
    }
};
