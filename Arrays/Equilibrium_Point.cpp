class Solution {
  public:

    int equilibriumPoint(long long arr[], int n) {
        if(n==1)return 1;
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum+= arr[i];
        }
        long long left = 0,right = 0;
        for(int i = 0;i<n;i++){
            right = sum - left - arr[i];
            if(left == right){return i+1;}
            left+= arr[i];
        }
        return -1;
    }
};
