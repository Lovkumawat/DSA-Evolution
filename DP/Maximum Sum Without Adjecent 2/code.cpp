

// User function Template for C++

class Solution {
    public:
    int solve(vector<int>&arr,int n,int cons,vector<vector<int>>&dp){
       if(n==0&&cons<=2){
           return arr[0];
       }else if(n==0&&cons>2){
           return 0;
       }
       
       if(n<0){
           return 0;
       }
       if(dp[n][cons]!=-1){
           return dp[n][cons];
       }
       
       int include=0;
       if(cons<=2){
            include=arr[n]+solve(arr,n-1,cons+1,dp); 
       }
       
       int exclude=0+solve(arr,n-1,1,dp);
       dp[n][cons]= max(include,exclude);
      return dp[n][cons];
    }
    
      int findMaxSum(vector<int>& arr) {
          int n=arr.size();
          vector<vector<int>>dp(n+1,vector<int>(4,-1));
         
          int ans=solve(arr,n-1,1,dp);
          return ans;
          
      }
  };
  
  