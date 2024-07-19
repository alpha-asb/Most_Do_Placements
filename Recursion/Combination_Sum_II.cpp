class Solution{
public:
    set<vector<int>>res;
    void solve(vector<int>&arr,int n,int sum,int idx,vector<int>&temp){
        if(sum < 0){return;}
        if(sum == 0){res.insert(temp);return;}
        if(idx == n){return;}
        temp.push_back(arr[idx]);
        solve(arr,n,sum-arr[idx],idx+1,temp);
        temp.pop_back();
        solve(arr,n,sum,idx+1,temp);
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        sort(arr.begin(),arr.end());
        vector<int>temp;
        solve(arr,n,k,0,temp);
        vector<vector<int>>result;
        for(auto it:res){
            result.push_back(it);
        }
        return result;
    }
};
