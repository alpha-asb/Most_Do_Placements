/*
class Solution{
public:
    vector<int>res;
    void solve(int N,int currency[],int idx,vector<int>&temp){
        if(N == 0){
            if(res.empty() || temp.size() < res.size()){
                res = temp;
                return;
            }
        }
        if(N < 0 || idx == -1){
           return; 
        }
        //cout<<N<<" "<<idx<<endl;
        if( N >= currency[idx]){
            temp.push_back(currency[idx]);
            solve(N - currency[idx],currency,idx,temp);
            temp.pop_back();
        }
        solve(N,currency,idx-1,temp);
    }
    
    vector<int> minPartition(int N)
    {
        vector<int>temp;
        int currency[10] = {1,2,5,10,20,50,100,200,500,2000};
        solve(N,currency,9,temp);
        return res;
    }
};
*/
class Solution{
public:
    
    vector<int> minPartition(int N)
    {
      int coin[10] = {2000,500,200,100,50,20,10,5,2,1};
      vector<int>res;
      for(int i = 0;i<10;i++){
          while(N >= coin[i]){
              N -= coin[i];
              res.push_back(coin[i]);
          }
          if(N == 0)break;
      }
      return res;
    }
};
