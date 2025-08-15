// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        string ans="";
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=1;
                ans+=s[i];
            }
            
        }
        return ans;
    }
};