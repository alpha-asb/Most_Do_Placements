int longestSubstrDistinctChars (string S)
{
    int fre[26] = {0};
    int i=0,j=0;
    int n= S.size();
    int len = 0;
    while(j<n){
        
        if(fre[S[j]-'a'] != 0){
            while(fre[S[j]-'a']!=0){
                fre[S[i]-'a']--;
                i++;
            }
        }
        
        fre[S[j]-'a']++;

        len = max(len,j-i+1);
        
        j++;
    }
    return len;

}
