  // Memoization approach
//   int solve(vector<int>&cost,int n,vector<int>&dp){
//       if(n<0){
//           return 0;
//       }
//       if(n==0){
//           return cost[0];
//       }
//       if(n==1){
//           return cost[1];
//       }
//       if(dp[n]!=-1){
//           return dp[n];
//       }
//       dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
//       return dp[n];
//   }
  
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n=cost.size();
//         vector<int>dp(n+1);
//         for(int i=0;i<n;i++){
//             dp[i]=-1;
//         }
//         int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
//         return ans;
//     }
// Tabulation approach
    // int minCostClimbingStairs(vector<int>& cost) {
    //     int n=cost.size();
    //     vector<int>dp(n+1,-1);
    //     dp[0]=cost[0];
    //     dp[1]=cost[1];
    //     for(int i=2;i<cost.size();i++){
    //         dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
    //     }
    //     return min(dp[n-1],dp[n-2]);

    // }
// Space Optimization
int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
    int prev1=cost[0];
    int prev2=cost[1];
    int curr;
    for(int i=2;i<cost.size();i++){
        curr=cost[i]+min(prev1,prev2);
        prev1=prev2;
        prev2=curr;
    }
    return min(prev1,prev2);
    
}