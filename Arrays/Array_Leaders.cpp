class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int>pre(n,0);
        pre[n-1] = arr[n-1];
        for(int i = n-2;i>=0;i--){
            pre[i] = max(pre[i+1],arr[i]);
        }
        vector<int>res;
        for(int i =0;i<n;i++){
            if(arr[i]>=pre[i])res.push_back(arr[i]);
        }
        return res;
    }
};
