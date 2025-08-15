class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]%k==0){
                arr[i]=0;
            }else if(arr[i]%k!=0){
                arr[i]=k-arr[i]%k;
            }
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        int troop=(n+1)/2;
        int j=0;
        while(troop!=0){
            ans+=arr[j];
            troop--;
            j++;
        }
        return ans;
    }
};