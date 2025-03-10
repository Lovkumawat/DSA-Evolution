int solve(int n,vector<int>&dp){
    if(n==0||n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    
    int ans;
    ans=solve(n-1,dp)+solve(n-2,dp);
    return dp[n]=ans;
}
  int countWays(int n) {
     vector<int>dp(n+1,-1);
      return solve(n,dp);
  }