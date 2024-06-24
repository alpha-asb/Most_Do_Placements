class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int sum = 0,l=0,r=0;
        while(r<n){
            sum+= arr[r];
            while(sum>s && l<r){
                sum-=arr[l];
                l++;
            }
            if(sum==s){
                return {l+1,r+1};
            }
             r++;
        }
        return {-1};
    }
};
