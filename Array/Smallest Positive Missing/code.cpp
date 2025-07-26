class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        
        // all elements are negetive 
        int flag=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
              flag=0;  
            }
        }
        
        if(flag==1){
        return 1;
        }
        
        
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
        }
        
        vector<bool>v(maxi,false);
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                v[arr[i]]=true;
            }
        }
        
        for(int i=1;i<=maxi;i++){
            if(v[i]==false){
                return i;
            }
        }
        return maxi+1;
        
        
        
        
        
    }
};