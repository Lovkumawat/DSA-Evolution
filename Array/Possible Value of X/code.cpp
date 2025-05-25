class Solution {
  public:
    int ValueX(int a, int b, int c) {
        
        int maxi=max(a,max(b,c));
        for(int x=0;x<=maxi;x++){
            if(((a|x)&(b|x))==c){
                return x;
            }
        }
        return -1;
    }
};