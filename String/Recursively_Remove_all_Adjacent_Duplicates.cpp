
class Solution {
  public:
    string rremove(string s) {
        string res ="";
        int n = s.size();
        
        for(int i=0;i<n;i++){
            bool repeat = false;
            while(i+1 < n && s[i] == s[i+1]){
                repeat = true;
                i++;
            }
            if(!repeat){
                res+=s[i];
            }
        }
        return (res.size()==n)?res: rremove(res);
    }
};
