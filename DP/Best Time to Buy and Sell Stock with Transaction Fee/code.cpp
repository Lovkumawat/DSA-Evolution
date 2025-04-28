int solve(int index,int buy,vector<int>&arr,vector<vector<int>>&dp,int fee){
    if(index==arr.size()){
        return 0;
    }
    if(dp[index][buy]!=-1){
        return dp[index][buy];
    }
    
    int profit=0;
    if(buy){
        int buykro=-arr[index]+solve(index+1,0,arr,dp,fee);
        int skipkro=0+solve(index+1,1,arr,dp,fee);
        profit=max(buykro,skipkro);
    }else{
        int sellkro=arr[index]-fee+solve(index+1,1,arr,dp,fee);
        int skipkro=0+solve(index+1,0,arr,dp,fee);
           
        profit=max(sellkro,skipkro);
    }
    return dp[index][buy]= profit;
}
   int maxProfit(vector<int>& prices, int fee) {
       int n=prices.size();
       vector<vector<int>>dp(n+1,vector<int>(2,-1));
       return solve(0,1,prices,dp,fee);
       
   }