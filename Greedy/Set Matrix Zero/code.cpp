    void setMatrixZeroes(vector<vector<int>> &mat) {
     int n=mat.size();
     int m=mat[0].size();
     
     
   vector<vector<int>> ans(n, vector<int>(m, -1));
     
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(mat[i][j]==0){
                 ans[i][j]=0;
             }
         }
     }
     
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(ans[i][j]==0){
                 // col zero
                 for(int k=0;k<m;k++){
                     mat[i][k]=0;
                 }
                 // row zerp
                 for(int l=0;l<n;l++){
                     mat[l][j]=0;
                 }
            
             }
         }
     }
     
     
    
    }