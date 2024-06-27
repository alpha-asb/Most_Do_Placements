class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        if(a.size() != b.size())return false;
        vector<int>alphabet(26,0);
        int n = a.size();
        for(int i=0;i<n;i++){
            alphabet[a[i]-'a']++;
            alphabet[b[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(alphabet[i]!=0)return false;
        }    
        return true;
    }

};
