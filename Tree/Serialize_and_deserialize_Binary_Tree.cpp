class Solution
{
    public:
    void inorder(Node*root,vector<int>&res){
        if(!root)return;
        inorder(root->left,res);
        res.push_back(root->data);
        inorder(root->right,res);
    }
    vector<int> serialize(Node *root) 
    {
        vector<int>res;
        inorder(root,res);
        return res;
    }
    
    Node* makeBTree(vector<int>&A,int l,int r){
        if(l>r){
            return NULL;
        }
        int mid = (l+r)/2;
        Node*root = new Node(A[mid]);
        
        root->left = makeBTree(A,l,mid-1);
        root->right = makeBTree(A,mid+1,r);
        
        return root;
        
    }
    Node * deSerialize(vector<int> &A)
    {
       return makeBTree(A,0,A.size()-1);
    }

};
