class Solution {
  public:
    int longestCommonSum(vector<int> &a1, vector<int> &a2) {
        // Code here
         int sum1=0;
         int sum2=0;
         int ans=0;
         unordered_map<int,int>mp;
        for(int i=0;i<a1.size();i++){
             sum1+=a1[i];
             sum2+=a2[i];
            int diff=sum1-sum2;
            
            if(diff==0){
                ans=max(ans,i+1);
            }else if(mp.find(diff)!=mp.end()){
                ans=max(ans,i-mp[diff]);
            }else{
                mp[diff]=i;
            }
        }
        return ans;
    }
};