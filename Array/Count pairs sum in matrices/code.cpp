  int countsum(int element,vector<int>arr,int x){
      int start=0;
      int end=arr.size()-1;
     int target = x - element;
      
      int mid=start+(end-start)/2;
      while(start<=end){
          if(arr[mid]==target){
              return true;
          }
          if(arr[mid]<=target){
              start=mid+1;
          }else{
              end=mid-1;
          }
           mid=start+(end-start)/2;
          
      }
      return false;
      
  }
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        vector<int>v1;
        
        for(int i=0;i<mat1.size();i++){
            for(int j=0;j<mat1[0].size();j++){
                v1.push_back(mat1[i][j]);
            }
        }
        vector<int>v2;
        for(int i=0;i<mat2.size();i++){
        for(int j=0;j<mat2[0].size();j++){
                v2.push_back(mat2[i][j]);
            }
        }
        int count=0;
        for(int i=0;i<v1.size();i++){
            if(countsum(v1[i],v2,x)){
                count++;
            }
        }
        
        return count;
        
    }