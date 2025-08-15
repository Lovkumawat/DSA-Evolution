    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=i;
            }else if(i-mp[arr[i]]<=k){
                return true;
            }
        }
        return false;
    }
};