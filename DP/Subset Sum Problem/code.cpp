class Solution {
    public:
    bool solve(vector<int>&arr,int sum,int i,vector<vector<int>>&dp){
        if(sum<0){
            return false;
        }
        if(i==arr.size()){
            if(sum==0){
                return true;
            }else{
                return false;
            }
        }
        
            if(dp[i][sum]!=-1){
                return dp[i][sum];
            }
        
        
        bool take=solve(arr,sum-arr[i],i+1,dp);
        bool nottake=solve(arr,sum-0,i+1,dp);
       return dp[i][sum]=take||nottake;
        
        
    }
      bool isSubsetSum(vector<int>& arr, int sum) {
          // code here
          int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
         return solve(arr,sum,0,dp);
      }
  };