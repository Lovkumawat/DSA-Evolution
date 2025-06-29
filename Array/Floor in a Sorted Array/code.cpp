class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;
        int maxi=INT_MIN;
        int ans=-1;
        
        while(start<=end){
      
            if(arr[mid]<=x){
                if(maxi<=arr[mid]){
                    maxi=arr[mid];
                    ans=mid;
                }
                start=mid+1;
            }else if(x<arr[mid]){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};