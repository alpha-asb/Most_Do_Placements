class Solution {
  public:
    string longestPalin (string S) {
        string res="";
        int len = 0;
        for(int i = 0;i<S.size();i++){
            int l = i,r =i;
            
            while(l>=0 and r<S.size() and S[l]==S[r]){
                int curr_len = r-l+1;
                if(curr_len >len){
                    len = curr_len;
                    res = S.substr(l,len);
                }
                l--;
                r++;
            }
        }
        for(int i = 0;i<S.size();i++){
            int l = i,r =i+1;
            
            while(l>=0 and r<S.size() and S[l]==S[r]){
                int curr_len = r-l+1;
                if(curr_len >len){
                    len = curr_len;
                    res = S.substr(l,len);
                }
                l--;
                r++;
            }
        }
        return res;
    }
};
