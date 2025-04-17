class Solution {
    public:
      int solve(int capacity, vector<int> &val, vector<int> &wt,int index,vector<vector<int>>&dp){
          if(index==0){
              if(wt[index]<=capacity){
                  return val[index];
              }else{
                  return 0;
              }
          }
          if(dp[capacity][index]!=-1){
              return dp[capacity][index];
          }
          int include=0;
          if(wt[index]<=capacity){
              include=val[index]+solve(capacity-wt[index],val,wt,index-1,dp);
          }
          
          int exclude=0+solve(capacity,val,wt,index-1,dp);
          int ans=max(include,exclude);
          return dp[capacity][index]=ans;
          
      }
      int knapsack(int W, vector<int> &val, vector<int> &wt) {
         int n=wt.size(); 
         vector<vector<int>>dp(W+1,vector<int>(n+1,-1));
      int ans=solve(W,val,wt,n-1,dp);
          return ans;
      }
  };