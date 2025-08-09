class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        vector<int>visited(n+1,0);
         visited[0]=1;
         for(int i=0;i<n;i++){
             if(visited[arr[i]]==0){
                 visited[arr[i]]=1;
             }else if(visited[arr[i]]==1){
                 ans.push_back(arr[i]);
             }
         }
         
         for(int i=0;i<=n;i++){
             if(visited[i]==0){
                 ans.push_back(i);
             }
         }
         
        return ans;
    }
};