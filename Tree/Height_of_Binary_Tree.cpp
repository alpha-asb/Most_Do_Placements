class Solution{
    public:
    //Function to find the height of a binary tree.
    int ht = INT_MIN;
    int len = 0;
    void dfs(Node*root){
        if(!root){return;}
        len++;
        ht = max(ht,len);
        dfs(root->left);
        dfs(root->right);
        len--;
        
    }
    int height(struct Node* node){
        dfs(node);
        return ht;
    }
};
