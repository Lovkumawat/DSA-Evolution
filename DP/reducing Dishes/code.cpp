int solve(vector<int>& satisfaction,int index,int time,vector<vector<int>>&dp){
    if(index==satisfaction.size()){
        return 0;
    }
    if(dp[index][time]!=-1){
        return dp[index][time];
    }

    int include=satisfaction[index]*time+solve(satisfaction,index+1,time+1,dp);
    int exclude=0+solve(satisfaction,index+1,time,dp);
    int ans=max(include,exclude);
    return dp[index][time]=ans;

}
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        int time=n+1;
        vector<vector<int>>dp(n+1,vector<int>(time,-1));
        return solve(satisfaction,0,1,dp);
    }