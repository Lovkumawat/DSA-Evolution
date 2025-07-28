// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        // code here
       
        // int *arr=new int[10];
        vector<int>ans;
       int arr[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        int index=9;
        while(N!=0){
            if(arr[index]>N){
                index--;
            }else{
                N=N-arr[index];
               ans.push_back(arr[index]); 
            }
        }
        return ans;
        
    }
};