vector<int> longestSubarray(vector<int>& arr, int x) {
    // code here
    int n=arr.size();
    deque<int>mindq;
    deque<int>maxdq;
    int start=0;
    int end=0;
    int ansStart=0;
    int ansEnd=0;
    while(end<n){
        // large elemnt
        
        while(!mindq.empty()&&arr[mindq.back()]>arr[end]) mindq.pop_back();
        // small element
          while(!maxdq.empty()&&arr[maxdq.back()]<arr[end]) maxdq.pop_back();
          mindq.push_back(end);
           maxdq.push_back(end);  
           while(arr[maxdq.front()]-arr[mindq.front()]>x){
               if(arr[start]==arr[maxdq.front()]){
                   maxdq.pop_front();
               }
               if(arr[start]==arr[mindq.front()]){
                   mindq.pop_front();
               }
                start++;
           }
           if(end-start>ansEnd-ansStart){
               ansEnd=end;
               ansStart=start;
           }
           
          
           end++;
    } 
    vector<int>ans;
for(int i=ansStart;i<=ansEnd;i++){
    ans.push_back(arr[i]);
}
return ans;
    
}