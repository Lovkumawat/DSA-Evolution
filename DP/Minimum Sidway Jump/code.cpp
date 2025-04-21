int solve(vector<int>&obstacles,int currentlane,int pos,vector<vector<int>>&dp){
    int n=obstacles.size()-1;
    if(pos==n){
        return 0;
    }
    if(dp[currentlane][pos]!=-1){
        return dp[currentlane][pos];
    }

    if(obstacles[pos+1]!=currentlane){
        return solve(obstacles,currentlane,pos+1,dp);

    }else{
        int ans=INT_MAX;
        for(int i=1;i<=3;i++){
            if(currentlane!=i&&obstacles[pos]!=i){
                ans=min(ans,1+solve(obstacles,i,pos,dp));
            }
        }
        return dp[currentlane][pos]=ans;

    }
    

}
int minSideJumps(vector<int>& obstacles) { 
    int n=obstacles.size();
    vector<vector<int>>dp(4,vector<int>(n+1,-1));
    return solve(obstacles,2,0,dp);
}