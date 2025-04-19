void solve(vector<int>&arr,int target,vector<int>v,vector<vector<int>>&ans,int n,int index){
    if(target==0){
        if(v.size()>0){
           
            ans.push_back(v);
            return;
        }
    }
    
    for(int i=index;i<n;i++){
        
        // prevent from previous value and for same previous value 
        if(i!=index&&arr[i]==arr[i-1]){
            continue;
        }
        
        if(target>=arr[i]){
            v.push_back(arr[i]);
            solve(arr,target-arr[i],v,ans,n,i);
            v.pop_back();
        }
    }
    return;
}
 vector<vector<int>> combinationSum(vector<int> &arr, int target) {
     vector<int>v;
     int n=arr.size();
      sort(arr.begin(),arr.end());
     vector<vector<int>>ans;
     solve(arr,target,v,ans,n,0);
 
       return ans;
     
 }
};