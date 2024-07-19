class Solution {
public:
int ans;
    int pathSum(Node* root, int& maxi) 
    {
        if(!root) return 0;
        if(!root->left && !root->right) return root->data;
        
        int left = pathSum(root->left, maxi) ;
        int right = pathSum(root->right, maxi) ;
        
        if(root->left && root->right) 
        {
            maxi = max(maxi, root->data + left + right);
            return root->data + max(left,right);
        }
        if(!root->right && root->left) return root->data + left;
        if(!root->left && root->right) return root->data + right;
        
    }
    int maxPathSum(Node* root)
    {   int maxi = INT_MIN;
        int val = pathSum(root, maxi);
        if(root->left && root->right) return maxi;
        
        return max(maxi,val);
    }
};
