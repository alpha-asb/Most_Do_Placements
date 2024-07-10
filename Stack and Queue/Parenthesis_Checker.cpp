class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
      stack<char>st;
      for(auto c:x){
          if(c == '{' || c == '[' || c == '('){
              st.push(c);
          }
          else if(c == '}' and !st.empty() and st.top() == '{'){
              st.pop();
          }
          else if(c == ']' and !st.empty() and st.top() == '['){
              st.pop();
          }
          else if(c == ')' and !st.empty() and st.top() == '('){
              st.pop();
          }
          else{
              return false;
          }
      }
      return st.empty();
    }

};
