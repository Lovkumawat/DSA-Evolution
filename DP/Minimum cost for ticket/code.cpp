int solve(int n,vector<int>&days,vector<int>&costs,int index,vector<int>&dp){
    if(index>=n){
        return 0;
    }
    if(dp[index]!=-1){
        return dp[index];
    }
    // day 1
    int op1=costs[0]+ solve(n,days,costs,index+1,dp);

    // day 7
    int i;
    for( i=index;i<n&&days[i]<days[index]+7;i++);

    int op2=costs[1]+solve(n,days,costs,i,dp);

    // day 30
    for( i=index;i<n&&days[i]<days[index]+30;i++);

    int op3=costs[2]+solve(n,days,costs,i,dp);

    int mini=min(op1,min(op2,op3));
    return dp[index]=mini;

}
int mincostTickets(vector<int>& days, vector<int>& costs) {
    int n=days.size();
    vector<int>dp(n+1,-1);
    return solve(n,days,costs,0,dp);
}