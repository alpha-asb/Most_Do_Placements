class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
       int i =0;
       int j =0;
       unordered_map<int,int>mp;
       vector<int>res;
       while(j<k){
           mp[A[j]]++;
           j++;
       }
       res.push_back(mp.size());
       while(j<n){
           mp[A[i]]--;
           if(mp[A[i]] == 0){
               mp.erase(A[i]);
           }
           mp[A[j]]++;
           res.push_back(mp.size());
           i++;
           j++;
       }
       return res;
    }
};
