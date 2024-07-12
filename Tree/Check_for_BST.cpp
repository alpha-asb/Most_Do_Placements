class Solution {
  public:
    bool dfs(Node*root,int minval,int maxval){
        if(!root){return true;}
        if(root->data <= minval || root->data >= maxval){
            return false;
        }
        return dfs(root->left,minval,root->data) && dfs(root->right,root->data,maxval);
    }
    bool isBST(Node* root) {
        return dfs(root,INT_MIN,INT_MAX);
    }
};
