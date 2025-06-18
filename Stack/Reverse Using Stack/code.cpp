class Solution {
  public:
    string reverse(const string& S) {
        // code here
        string ans="";
        stack<char>st;
        for(auto it:S){
            st.push(it);
        }
        while(!st.empty()){
            char ch=st.top();
            ans=ans+ch;
            st.pop();
        }
        return ans;
        
    }
};