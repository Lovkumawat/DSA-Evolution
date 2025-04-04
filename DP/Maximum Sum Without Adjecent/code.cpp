
//User function template for C++
class Solution{
    public:	
        
        int solve(vector<int>&arr,int n,int index,vector<int>&dp){
            if(index==n-1){
                return arr[n-1];
            }
            
            if(index>=n){
                return 0;
            }
            if(dp[index]!=-1){
                return dp[index];
            }
            
            int include=arr[index]+solve(arr,n,index+2,dp);
            int exclude=0+solve(arr,n,index+1,dp);
            dp[index]= max(include,exclude);
            return dp[index];
            
        }
        int findMaxSum(vector<int>&arr, int n) {
            vector<int>dp(n+1,-1);
            int ans=solve(arr,n,0,dp);
            return ans;
        }
    };