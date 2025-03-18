bool solve(vector<int>&arr,int target,int i,vector<vector<int>>&dp){
    if(target<0){
        return false;
    }
    if(i==arr.size()){
        if(target==0){
            return true;
        }else{
            return false;
        }
    }
    if(dp[i][target]!=-1){
        return dp[i][target];
    }
    
    
    int take=solve(arr,target-arr[i],i+1,dp);
    int nottake=solve(arr,target,i+1,dp);
    return dp[i][target]=(take||nottake);
    
}
  bool equalPartition(vector<int>& arr) {
      
      int target=0;
      for(int i=0;i<arr.size();i++){
          target+=arr[i];
      }
      if(target%2==0){
          target=target/2;
      }else{
          return false;
      }
      int n=arr.size();
      vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
      
     return solve(arr,target,0,dp);
  }