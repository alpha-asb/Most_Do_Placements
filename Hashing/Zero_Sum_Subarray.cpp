class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        unordered_map<long long,long long>mp;
        long long sum = 0;
        long long count = 0;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()){
                count+=mp[sum];
            }
            mp[sum]++;
        }
        return count;
    }
};
