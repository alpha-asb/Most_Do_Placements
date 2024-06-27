class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n = str1.size();
        int m = str2.size();
        if(n!=m)return false;
        if(n<3){
            return str1==str2;
        }
        string clockwise = str1.substr(2) + str1.substr(0,2);

        string anti_clockwise = str1.substr(n-2) + str1.substr(0,n-2);
 
        return str2 == clockwise || str2 == anti_clockwise;
    }

};
