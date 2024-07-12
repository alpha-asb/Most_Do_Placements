class Solution{
    public:
    bool dfs(Node*n1,Node*n2){
        if(!n1 && !n2)return true;
        else if(!n1|| !n2)return false;
        else return (n1->data == n2->data) && dfs(n1->left,n2->right) && dfs(n1->right,n2->left);
    }
    bool isSymmetric(struct Node* root)
    {   if(!root)return true;
	    return dfs(root->left,root->right);
    }
};
