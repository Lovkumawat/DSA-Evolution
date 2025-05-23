int solve(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
      
    if(i==s1.length()||j==s2.length()){
        return 0;
    }
    
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    
    if(s1[i]==s2[j]){
        return dp[i][j]= 1+solve(s1,s2,i+1,j+1,dp);
    }else{
        return dp[i][j]=max(solve(s1,s2,i+1,j,dp),solve(s1,s2,i,j+1,dp));
    }
  
    
}
  int longestPalinSubseq(string &s) {
      // code here
      string s1=s;
      reverse(s.begin(),s.end());
      string s2=s;
      int n=s.length();
      vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
      return solve(s1,s2,0,0,dp);
  }