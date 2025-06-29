class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        
        int TotalSum=0;
        for(int i=0;i<arr.size();i++){
            TotalSum+=arr[i];
        }
        int CurrentSum=0;
        int i=0;
        while(i<arr.size()){
            if(TotalSum-arr[i]==2*CurrentSum){
                return i;
            }
            CurrentSum+=arr[i];
            i++;
        }
        return -1;
        
        
    }
};