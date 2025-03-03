vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    // code here
    int n=arr.size();
    vector<int>ans;
    queue<int>q;
    int maxi=INT_MIN;
    for(int i=0;i<k;i++){
        q.push(arr[i]);
        maxi=max(maxi,arr[i]);
    }
    ans.push_back(maxi);
   int  i=k;
    while(i<n){
        int front=q.front();
        if(front==maxi){
            q.pop();
            maxi=INT_MIN;
            q.push(arr[i]);
            queue<int>q1=q;
            while(!q1.empty()){
                front=q1.front();
                maxi=max(maxi,front);
                q1.pop();
            }
            
        }else{
            q.pop();
            q.push(arr[i]);
             maxi=max(maxi,arr[i]);
        }
        ans.push_back(maxi);
        i++;
    }
    return ans;
}