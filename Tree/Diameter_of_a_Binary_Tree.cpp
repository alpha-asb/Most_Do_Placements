class Solution {
  public:
    int ans = 0;
    int dfs(Node*root){
        if(!root)return 0;
        
        int left = dfs(root->left);
        int right = dfs(root->right);
        ans = max(ans,left+right+1);
        return 1 + max(left,right);
    }
    
    int diameter(Node* root) {

        dfs(root);
        return ans;
    }
};
