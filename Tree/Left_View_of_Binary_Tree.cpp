int max_level;
void dfs(Node*root,int level,vector<int>&res){
    if(!root){return;}
    if(level>max_level){
        res.push_back(root->data);
        max_level = level;
    }
    dfs(root->left,level+1,res);
    dfs(root->right,level+1,res);
}
vector<int> leftView(Node *root)
{  max_level = -1;
   vector<int>res;
   dfs(root,0,res);
   return res;
}
