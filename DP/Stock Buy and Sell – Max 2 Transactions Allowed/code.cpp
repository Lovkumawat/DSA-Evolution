int solve(int index,int buy,vector<int>&arr,vector<vector<vector<int>>>&dp,int limit){
    if(index==arr.size()){
        return 0;
    }
    if(limit==0){
        return 0;
    }
    if(dp[index][buy][limit]!=-1){
        return dp[index][buy][limit];
    }
    
    int profit=0;
    if(buy){
        int buykro=-arr[index]+solve(index+1,0,arr,dp,limit);
        int skipkro=0+solve(index+1,1,arr,dp,limit);
        profit=max(buykro,skipkro);
    }else{
        int sellkro=arr[index]+solve(index+1,1,arr,dp,limit-1);
        int skipkro=0+solve(index+1,0,arr,dp,limit);
           
        profit=max(sellkro,skipkro);
    }
    return dp[index][buy][limit]= profit;
}
   int maxProfit(vector<int> &prices) {
      
       int n=prices.size();
       vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
       return solve(0,1,prices,dp,2);
       
   }