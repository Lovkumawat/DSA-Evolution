class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        
        for(auto i:s1){
            mp1[i]++;
        }
        for(auto i:s2){
            mp2[i]++;
        }
        if(mp1.size()!=mp2.size()){
            return false;
        }
       int i=0;
       int j=0;
       while(i<mp1.size()&&j<mp1.size()){
           if(mp1[s1[i]]!=mp2[s2[j]]){
               return false;
           }
           i++;
           j++;
       }
       return true;
    }
};