class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        
        if(s1.size()!=s2.size()){
            return false;
        }
        map<char,int>mp;
        for(auto i:s1){
            mp[i]++;
        }
        for(auto i:s2){
            mp[i]--;
        }
        for(auto i:s1){
            if(mp[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};