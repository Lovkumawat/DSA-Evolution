int maxLen(vector<int> &arr) {
    // Your code here
    int sum=0;
    int ans=0;
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            sum+=1;
        }else if(arr[i]==0){
            sum+=-1;
        }
        if(sum==0){
            ans=i+1;
        }else if(mp.find(sum)!=mp.end()){
            ans=max(ans,i-mp[sum]);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
        
    }
    return ans;
}