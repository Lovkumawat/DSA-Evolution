int solve(int target,int index,vector<int>&dp){
    if(target==0){
        
        return 0;
    }

  if(dp[target]!=-1){
    return dp[target];
  }


    int mini=INT_MAX;
    for(int i=index;i*i<=target;i++){
        int val=i*i;
        if(target>=val){
             mini=min(mini,1+solve(target-val,i,dp));
             
        }
      

    }
    
    return dp[target]=mini;

}

int numSquares(int n) {

    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }

    if(n==3){
        return 3;
    }

    vector<int>dp(n+1,-1);
    int ans=solve(n,1,dp);
    return ans;
    
}