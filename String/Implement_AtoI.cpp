class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int num = 0;
        int i =0;
        bool neg = false;
        if(s[i] == '-'){i++;neg = true;}
        
        for(;i<s.size();i++){
            if(s[i]-'0'<0 || s[i]-'0'>9){
                return -1;
            }
            else{
                num = num*10 + (s[i]-'0');
            }
        }
        return neg?-1*num:num;
    }
};
