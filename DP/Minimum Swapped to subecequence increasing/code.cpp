int solve(vector<int>&nums1,vector<int>&nums2,int index,bool swapped,vector<vector<int>>&dp){
    if(index==nums1.size()){
        return 0;
    }
    if(dp[index][swapped]!=-1){
        return dp[index][swapped];
    }
    int ans=INT_MAX;
    int prev1=nums1[index-1];
    int prev2=nums2[index-1];
    // catch

    if(swapped){
        swap(prev1,prev2);
    }
    // no swap
    if(nums1[index]>prev1&&nums2[index]>prev2){
        ans=min(ans,0+solve(nums1,nums2,index+1,0,dp));
    }
    // swap
    if(nums1[index]>prev2&&nums2[index]>prev1){
        ans=min(ans,1+solve(nums1,nums2,index+1,1,dp));
    }
    return dp[index][swapped]=ans;

}
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        bool swapped=0;
        int n=nums1.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        nums1.insert(nums1.begin(),-1);
        nums2.insert(nums2.begin(),-1);
        return solve(nums1,nums2,1,0,dp);
    }