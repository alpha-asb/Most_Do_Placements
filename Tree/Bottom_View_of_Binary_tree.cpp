class Solution {
  public:
    map<int,pair<int,int>>mp;
    void dfs(Node*root,int level,int idx){
        if(!root)return;
        if(mp.find(idx)!=mp.end()){
            if(mp[idx].second <= level){
                mp[idx] = {root->data,level};
            }
        }
        else{
            mp[idx] = {root->data,level};
        }
        dfs(root->left,level+1,idx-1);
        dfs(root->right,level+1,idx+1);
    }
    vector <int> bottomView(Node *root) {
        mp.clear();
        dfs(root,0,0);
        vector<int>res;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            res.push_back(it->second.first);
        }
        return res;
    }
};
