class Solution
{
	public:
	    void solve(set<string>&res,int start, string &s){
	        if(start == s.size()-1){
	            res.insert(s);
	            return;
	        }
	        for(int i=start;i<s.size();i++){
	            swap(s[i],s[start]);
	            solve(res,start+1,s);
	            swap(s[i],s[start]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    set<string>res;
		    solve(res,0,S);
		    vector<string>result;
		    for(auto it:res){
		        result.push_back(it);
		    }
		    return result;
		}
};
