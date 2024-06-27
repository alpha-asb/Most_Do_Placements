class Solution{
public:	
		
	string removeDups(string S) 
	{
	    vector<int>alphabet(26,0);
	    string res = "";
	    for(int i=0;i<S.size();i++){
	        if(alphabet[S[i]-'a']==0){
	            res+=S[i];
	        }
	        alphabet[S[i]-'a']++;
	    }
	    return res;
	}
};
