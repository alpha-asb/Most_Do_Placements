class Solution
{
    public: 
    Node*head = NULL;
    Node*prev = NULL;
    
    void inorder(Node*root){
        if(!root)return;
        inorder(root->left);
        if(!prev){
            head = root;
        }
        else{
            prev->right = root;
            root->left = prev;
        }
        prev = root;
        inorder(root->right);
    }
    Node * bToDLL(Node *root)
    {
        head = NULL;
        prev = NULL;
        inorder(root);
        return head;
    }
};
