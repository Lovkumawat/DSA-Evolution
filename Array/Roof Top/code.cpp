class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int maxi=INT_MIN;
        int i=0;
        int count=0;
        int j;
        while(i<arr.size()-1){
            while(arr[i]<arr[i+1]){
                count++;
                i++;
            }
            if(maxi<=count){
                i--;
            }
            i++;
            count=0;
            
            
        }
        
    }
};