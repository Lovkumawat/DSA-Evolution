class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        int n=citations.size();
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++){
            if(citations[i]>=n){
                freq[n]++;
            }else{
                freq[citations[i]]++;
            }
        }
        int hindex=n;
        int num=freq[n];
        while(num<hindex){
            hindex--;
            num+=freq[hindex];
        }
        return hindex;
    }
};