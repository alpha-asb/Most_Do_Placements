class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        int len = 0;
        unordered_map<int ,int>mp;
        int sum =0;
        mp[0] = 0;
        for(int i =0;i<n;i++){
            sum+= arr[i];
            if(sum == 0){
                len = i+1;
            }
            if(mp.find(sum)!=mp.end()){
                len = max(len,i-mp[sum]);
            }
            else{
                mp[sum] = i;
            }
        }
        return len;
    }
};
