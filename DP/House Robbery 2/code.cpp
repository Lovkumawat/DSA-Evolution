class Solution {
    public:
        int solve(vector<int>&num,int n,vector<int>&dp){
            if (n==0){
                return num[n];
            }
            if(n<0){
                return 0;
            }
    
            if(dp[n]!=-1){
                return dp[n];
            }
    
            int include=num[n]+solve(num,n-2,dp);
            int exclude=0+solve(num,n-1,dp);
            dp[n]=max(include,exclude);
            return dp[n];
        }
    
        int rob(vector<int>& nums) {
            int n=nums.size();
            if(n==1){
                return nums[0];
            }

            vector<int>num1;
            vector<int>num2;
    
            for(int i=1;i<n;i++){
                num1.push_back(nums[i]);
            }
            for(int i=0;i<n-1;i++){
                num2.push_back(nums[i]);
            }
    
            int n1=num1.size();
            int n2=num2.size();
    
            vector<int>dp1(n1+1,-1);
            vector<int>dp2(n2+1,-1);
        
        int first =solve(num1,n1-1,dp1);
        int second=solve(num2,n2-1,dp2);
        int ans=max(first,second);
        return ans; 
    
        }
    };