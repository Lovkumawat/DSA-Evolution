class Solution {
  public:
    // Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix) {
        
        vector<int>ans;
        int row=0;
        int col;
        int size=matrix.size();
        bool leftToright=true;
        while(row<size){
            
            if(leftToright==true){
                col=0;
                while(col<size){
                     ans.push_back(matrix[row][col]);
                     col++;
                }
                leftToright=false;
                    
            }else{
                col=size-1;
                while(col>=0){
                     ans.push_back(matrix[row][col]);
                     col--;
                }
                leftToright=true;
            }
            
       row++;
        }
        return ans;
    }
};