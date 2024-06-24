class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        // first pass : negate the array
        int sum = (n*(n+1))/2;
        int arr_sum =0;
        for(int i=0;i<n-1;i++){
            arr_sum+=arr[i];
        }
        return sum-arr_sum ;
    }
};
