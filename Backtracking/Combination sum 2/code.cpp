void solve(vector<int>arr,int target,vector<int>v,vector<vector<int>>&ans,int index,int n){
    if(target==0){
        if(v.size()>0){
            ans.push_back(v);
            return;
        }
    }
    
    for(int i=index;i<n;i++){
    
        // if(i!=index){
        //     continue;
        // }
        if(target>=arr[i]){
            v.push_back(arr[i]);
            solve(arr,target-arr[i],v,ans,i+1,n);
            v.pop_back();
        }
    }
    return;
}

vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
   
   vector<int>v;
   vector<vector<int>>ans;
   sort(arr.begin(),arr.end());
   int n=arr.size();
   solve(arr,target,v,ans,0,n);
   sort(ans.begin(),ans.end());
   auto last=unique(ans.begin(),ans.end());
   ans.erase(last,ans.end());
   
   return ans;
}