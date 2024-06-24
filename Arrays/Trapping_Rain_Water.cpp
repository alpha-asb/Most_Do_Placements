class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int>l(n,0);
        vector<int>r(n,0);
        l[0] = arr[0];
        r[n-1] = arr[n-1];
        for(int i=1;i<n;i++){
            l[i] = max(l[i-1],arr[i]);
        }
        for(int j = n-2;j>=0;j--){
            r[j] = max(r[j+1],arr[j]);
        }
        long long count =0;
        
        for(int i=0;i<n;i++){
            count = count + min(l[i],r[i])-arr[i];
        }
        return count;
    }
};
