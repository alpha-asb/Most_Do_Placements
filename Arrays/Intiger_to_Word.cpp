class Solution{   
public:
string ones[20] = {"","one ","two ","three ","four ","five ","six ",
"seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ",
"fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    string tens[10] = {"","","twenty ","thirty ","forty ","fifty ","sixty ",
    "seventy ","eighty ","ninety "};
    string helper(long n,string s){
        string str = "";
        if(n<20){
            str = ones[n];
        }
        else{
            str = tens[n/10]+ones[n%10];
        }
        if(n){
            str += s;
        }
        return str;
    }
    string convertToWords(long n) {
        string res ="";
        res += helper(n/10000000,"crore ");
        res += helper((n/100000)%100,"lakh ");
        res += helper((n/1000)%100,"thousand ");
        res += helper((n/100)%10,"hundred ");

        if(n>100 && n%100){
            res += "and ";
        }
        res+=helper(n%100,"");
        return res;
    }
};
