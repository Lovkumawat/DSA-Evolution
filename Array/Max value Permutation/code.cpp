class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        
         sort(arr.begin(),arr.end());
    long long int sum=0;
    const int MOD = 1e9 + 7;
    for(long long int i=0;i<arr.size();i++){
        sum+=arr[i]*i;
    }
    return sum%MOD;
    
    }
};