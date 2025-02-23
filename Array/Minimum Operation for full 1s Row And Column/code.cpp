int minOperation(vector<vector<int>>& grid) {
        
    int min_operations=INT_MAX;
    for(int row=0;row<grid.size();row++){
       
       
    for(int col=0;col<grid.size();col++){
       int ops=0;
       
       for(int i=0;i<grid.size();i++){
           if(grid[row][i]==0){
               ops++;
           }
       }
       
        for(int i=0;i<grid.size();i++){
           if(i!=row&&grid[i][col]==0){
               ops++;
           }
       }
       min_operations=min(min_operations,ops);
       
        
    }
   
   
    }
    return min_operations;
    
    
   
 
    

    
}