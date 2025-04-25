int longestSubsequence(vector<int>& arr, int difference) {
    unordered_map<int,int>mp;
    int ans=0;
    for(int i=0;i<arr.size();i++){
        int temp=arr[i]-difference;
        int tempans=0;
        if(mp.find(temp)!=mp.end()){
            tempans=mp[temp];
        }
        mp[arr[i]]=tempans+1;

        ans=max(ans,mp[arr[i]]);
        
    }
    return ans;
}