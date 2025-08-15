// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        string ans="";
        for(int i=0;i<s.size();i++){
            if(count==0){
                ans=ans+s[i];
            }
            if(s[i]==ch&&count!=0){
                count--;
            }
            
        }
        return ans;
    }
};