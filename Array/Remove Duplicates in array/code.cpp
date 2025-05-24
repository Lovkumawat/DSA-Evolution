vector<int> removeDuplicate(vector<int>& arr) {
    // code here
    int n=arr.size();
    vector<int>ans;
    unordered_map<int,int>mp;
   
  for(int i=0;i<n;i++){
      if(mp[arr[i]]==0){
          ans.push_back(arr[i]);
          mp[arr[i]]++;
      }
  }
    return ans;
}

