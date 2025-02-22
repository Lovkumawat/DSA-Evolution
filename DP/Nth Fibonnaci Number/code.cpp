  // Recursion
//   int fib(int n){
//       if(n==0||n==1){
//           return n;
//       }
//       return (fib(n-1)+fib(n-2));
//   }
// -----------------------------------------------------------------------------------------------
// Recursion +Memoization
//   int fib(int n,vector<int>&dp){
//         if(n==0||n==1){
//             return n;
//         }
//         if(dp[n]!=-1){
//             return dp[n];
//         }
//         dp[n]=fib(n-1,dp)+fib(n-2,dp);
//         return dp[n];
//     }
// ---------------------------------------------------------------------------------------------------------
int nthFibonacci(int n) {
    // Recursion 
    // return fib(n);
// ------------------------------------------------------------------------------------------------        
    // Recursion +Memoization
    // vector<int>dp(n+1);
    // for(int i=0;i<=n;i++){
    // dp[i]=-1;            
    // }
    // return fib(n,dp);
// ----------------------------------------------------------------------------------------------------------        
// Tabulation 
    // vector<int>dp(n+1);
    // dp[0]=0;
    // dp[1]=1;
    // for(int i=2;i<=n;i++){
    //     dp[i]=dp[i-1]+dp[i-2];
    // }
    // return dp[n];
// Space Optimization 
int prev1=0;
int prev2=1;
if(n==0||n==1){
    return n;
}
int curr=prev1+prev2;
for(int i=2;i<=n;i++){
    curr=prev1+prev2;
    prev1=prev2;
    prev2=curr;
}

return curr;



    
    
}