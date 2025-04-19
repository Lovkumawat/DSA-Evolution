int  solve(vector<int>&arr,int key,int n,vector<int>&dp){
    if(key==0){
     return 1;
    }
    
    if(key<0){
        return 0;
    }
    
    if(dp[key]!=-1){
        return dp[key];
    }
    
    int answer=0;
    
    for(int i=0;i<n;i++){
        if(key>=arr[i]){
            
           answer+= solve(arr,key-arr[i],n,dp);
          
        }
    }
    dp[key]=answer;
    return dp[key];
    
}
  int combinationSum4(vector<int>& arr, int key) {
      
      
     
      int n= arr.size();
      vector<int>dp(key+1,-1);
  int ans=solve(arr,key,n,dp);
      
      return ans;
      
  }