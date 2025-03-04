int solve(int n,int currIndex,int preIndex,vector<int>&arr,vector<vector<int>>&dp){
    if(currIndex==n){
        return 0;
    }
    
    if(dp[currIndex][preIndex+1]!=-1){
        return dp[currIndex][preIndex+1];
    }
    
    int Include=0;
    if(preIndex==-1||arr[currIndex]>arr[preIndex]){
        Include=1+solve(n,currIndex+1,currIndex,arr,dp);
    }
    
    int exclude=0+solve(n,currIndex+1,preIndex,arr,dp);
    int ans=max(Include,exclude);
    return dp[currIndex][preIndex+1]=ans;
}

  int lis(vector<int>& arr) {
      int n=arr.size();
      vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
      return solve(n,0,-1,arr,dp);
  }