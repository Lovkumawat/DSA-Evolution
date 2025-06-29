class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // swap 
        int n=mat[0].size();
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size()/2;j++){
                int temp=mat[i][j];
               
                mat[i][j]=mat[i][n-j-1];
                mat[i][n-j-1]=temp;
               
            }
        }
        

        
        //tarnspose
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        return;
        
    }
};