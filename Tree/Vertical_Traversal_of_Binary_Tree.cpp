class Solution
{
    public:
    map<int,vector<int>>mp;
    vector<int> verticalOrder(Node *root)
    {
       vector<int>res;
       queue<pair<Node*,int>>q;
       mp.clear();
       if(!root)return res;
       q.push({root,0});
       while(!q.empty()){
           auto it = q.front();
           q.pop();
           Node*temp = it.first;
           int level = it.second;
           mp[level].push_back(temp->data);
           if(temp->left){
               q.push({temp->left,level-1});
           }
           if(temp->right){
               q.push({temp->right,level+1});
           }
       }
       for(auto it:mp){
           for(auto num: it.second){
               res.push_back(num);
           }
       }
       return res;
    }
};
