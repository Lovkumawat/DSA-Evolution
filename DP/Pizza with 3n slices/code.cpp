class Solution {
public:
    int solve(int index,int endIndex,int n,vector<int>&slices,vector<vector<int>>&dp){
        if(n==0||index>endIndex){
            return 0;
        }
        if(dp[index][n]!=-1){
            return dp[index][n];
        }

        int include=slices[index]+solve(index+2,endIndex,n-1,slices,dp);
        int exclude=0+solve(index+1,endIndex,n,slices,dp);
        
        return dp[index][n]=max(include,exclude);
    }
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        vector<vector<int>>dp1(k+1,vector<int>((k/3)+1,-1));
        vector<vector<int>>dp2(k+1,vector<int>((k/3)+1,-1));
        int case1=solve(0,k-2,k/3,slices,dp1);
        int case2=solve(1,k-1,k/3,slices,dp2);

        return max(case1,case2);
    }
};