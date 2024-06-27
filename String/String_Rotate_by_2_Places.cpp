class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Approach 1 : O(n) Time and O(n) Space
        /*
        int n = str1.size();
        int m = str2.size(); 
        if(n!=m)return false;
        if(n<3){
            return str1==str2;
        }
        string clockwise = str1.substr(2) + str1.substr(0,2);

        string anti_clockwise = str1.substr(n-2) + str1.substr(0,n-2);
 
        return str2 == clockwise || str2 == anti_clockwise;
        */
        // Approach 2: O(n) Time and O(1) Space 
        
        int n = str1.size();
        bool clockwise = true,anti_clockwise=true;
        for(int i=0;i<n;i++){
            if(str1[i] != str2[(i+2)%n]){
                clockwise = false;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(str1[(i+2)%n] != str2[i]){
                anti_clockwise = false;
                break;
            }
        }
        return clockwise || anti_clockwise;
        
    }

};
