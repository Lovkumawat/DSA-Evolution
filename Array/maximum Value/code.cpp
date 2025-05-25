class Solution {
  public:
    int maximumValue(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int i=0;
        int k=1;
        int j=arr.size()-1;
        int ans=abs(arr[i]-arr[j])+abs(arr[j]-arr[k])+abs(arr[k]-arr[i]);
        return ans;
        
    }
};