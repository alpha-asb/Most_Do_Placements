class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char,int>mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int n = str.size();
        int num=0;
        for (int i = 0; i < n; ++i) {
            if (i + 1 < n && mp[str[i]] < mp[str[i + 1]]) {
                num -= mp[str[i]];
            } else {
                num += mp[str[i]];
            }
        }
        return num;
    }
};
