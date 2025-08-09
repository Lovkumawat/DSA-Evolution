class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        if(arr.size()==1){
            return 0;
        }
        
        int sum=0;
        
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            sum=sum+a+b;
            if(pq.size()>0){
              pq.push(a+b);  
            }
            
        }
        return sum;
        
        
        
    }
};