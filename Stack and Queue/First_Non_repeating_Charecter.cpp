class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char>q;
            int character[26] = {0};
		    string res = "";
		    for(char c:A){
		       character[c-'a']++;
		       if(character[c-'a'] > 1){
		        while (!q.empty() && character[q.front() - 'a'] > 1) {
                q.pop();
                }
		       }
               else{
                   q.push(c);
               }
		       if(!q.empty()){
		           res += q.front();
		       }
		       else{
		           res += '#';
		       }
		    }
		    return res;
		}

};
