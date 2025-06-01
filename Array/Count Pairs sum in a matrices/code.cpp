  bool isSum(vector<vector<int>> &mat, int sum){
      int n=mat[0].size();
      int m=mat.size();
      int start=0;
      int end=m*n-1;
      while(start<=end){
          int mid=start+(end-start)/2;
          int r=mid/n;
          int c=mid%n;
          if(mat[r][c]==sum){
              return true;
          }else if(mat[r][c]>sum){
              end=mid-1;
          }else{
              start=mid+1;
          }
      }
      return false;
      
  }
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int n=mat1.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isSum(mat2,x-mat1[i][j])){
                    count++;
                }
            }
        }
        return count;
    }