int maxDistance(vector<int> &arr) {
    int maxi=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    vector<bool>v(maxi,false);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(v[arr[i]]==false){
            v[arr[i]]=true;
            mp[arr[i]]=i;
        }
    }
    
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    maxi=INT_MIN;
    
    for(int i=n-1;i>=0;i--){
        if(hash[arr[i]]>=2){
          maxi=max(maxi,i-mp[arr[i]]);
        }
     
    }
    if(maxi!=INT_MIN){
        return maxi;
    }
    return 0;
    
    
     
     
     
 }