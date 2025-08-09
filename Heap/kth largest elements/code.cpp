class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        priority_queue<int,vector<int>,greater<int>> pq;
        int i=0;
        while(i<k{
        pq.push(arr[i]);
        
            i++;
        }
        i=k;
        while(i<arr.size()){
            if(arr[i]>pq.top()){
                pq.pop();
                st.push(arr[i]);
            }
            i++;
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        
        
        
    }
};