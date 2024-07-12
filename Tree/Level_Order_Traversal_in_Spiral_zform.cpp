 vector<int> findSpiral(Node *root)
{  
     
     //Approach 1 : O(N) Time and O(N) Space
     
    vector<int>res;
    queue<Node*>q;
    if(!root)return res;
    q.push(root);
    bool flag = false;
    while(!q.empty()){
        int size = q.size();
        vector<int>tm;
        for(int i=0;i<size;i++){
            Node*temp = q.front();
            q.pop();
            tm.push_back(temp->data);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        if(flag){
            for(int i =0;i<tm.size();i++){
                res.push_back(tm[i]);
            }
        }
        else{
            for(int i =tm.size()-1;i>=0;i--){
                res.push_back(tm[i]);
            }
        }
        flag = !flag;
    }
    return res;
    
    
}
