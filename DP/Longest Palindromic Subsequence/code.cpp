int solve(int i,int j,string &s1,string &s2,int n,int m,vector<vector<int>>&dp){
    if(i==n||j==m){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=0;
    if(s1[i]==s2[j]){
        ans =1+solve(i+1,j+1,s1,s2,n,m,dp);
    }else if(s1[i]!=s2[j]){
        ans= max(solve(i+1,j,s1,s2,n,m,dp),solve(i,j+1,s1,s2,n,m,dp));
    }
    return dp[i][j]=ans;
    
}
  int longestPalinSubseq(string &s) {

      int n=s.length();
      string s1=s;
      reverse(s.begin(), s.end());
      string s2=s;
      vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
      return solve(0,0,s1,s2,n,n,dp);
  }