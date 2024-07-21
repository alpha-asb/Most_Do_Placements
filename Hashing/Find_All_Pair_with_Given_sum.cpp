class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int x, vector<int> &arr1, vector<int> &arr2) {
        vector<pair<int,int>>res;
        unordered_map<int,int>mp;
        
        for(int i =0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        for(int i = 0;i<arr2.size();i++){
            if(mp[x-arr2[i]] > 0){
                res.push_back({x-arr2[i],arr2[i]});
                mp[x-arr2[i]]--;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
