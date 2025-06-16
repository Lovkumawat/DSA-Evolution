    int maxDistance(vector<int> &arr) {
        
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=i;
        }
        
        
    }
    int ans=INT_MIN;
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        ans=max(ans,i-mp[arr[i]]);
        
    }
    return ans;
    
        
    }