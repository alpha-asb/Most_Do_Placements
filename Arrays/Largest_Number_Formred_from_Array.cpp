class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool myCompare(string a,string b){
	    string ab = a+b;
	    string ba = b+a;
	    return (ab > ba)?1:0;
	}
	string printLargest(int n, vector<string> &arr) {
	    // code here
	    sort(arr.begin(),arr.end(),myCompare);
	    
	    string res = "";
	    for(auto c:arr){
	        res+=c;
	    }
	    return res;
	}
};
