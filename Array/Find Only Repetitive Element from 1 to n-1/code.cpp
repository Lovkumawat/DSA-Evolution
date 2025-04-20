class Solution {
    public:
      int findDuplicate(vector<int>& arr) {
          
          int sum=0;
          int n=arr.size();
          for(int i=1;i<n;i++){
              sum+=i;
          }
          int sumelement=0;
          for(int i=0;i<n;i++){
              sumelement+=arr[i];
          }
          return(sumelement-sum);
          
          
      }
  };