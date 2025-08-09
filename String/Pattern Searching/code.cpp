// User function Template for C++
class Solution {
  public:
    bool searchPattern(string& txt, string& pat) {
        // your code here
        int size=txt.size();
        int n=pat.size();
        if(size==n){
            return txt==pat;
        }
        for(int i=1;i<=txt.size();i++){
            string s=txt.substr(i,n);
            if(s==pat){
                return true;
            }
        }
        return false;
    }
};
