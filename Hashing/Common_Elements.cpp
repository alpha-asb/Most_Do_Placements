class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<v1.size();i++){
            mp[v1[i]]++;
        }
        for(int i=0;i<v2.size();i++){
            if(mp.find(v2[i]) != mp.end()){
                res.push_back(v2[i]);
                mp[v2[i]]--;
                if(mp[v2[i]] == 0){
                    mp.erase(v2[i]);
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
