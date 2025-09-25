class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int totalsum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            totalsum+=arr[i];
        }
        if(totalsum%3!=0){
            return {-1,-1};
        }
        totalsum=totalsum/3;
        int sum=0;
        vector<int>ans;
        int i=-1;
        int j=-1;
        for(int k=0;k<n;k++){
            sum+=arr[i];
            if(sum==totalsum){
                i=k;
            }
            if(sum==2*totalsum){
                j=k;
            }
            
        }
        
        return {i,j};
    }