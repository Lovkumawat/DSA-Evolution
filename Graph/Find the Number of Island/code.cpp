
class Solution {
    public:
      int countIslands(vector<vector<char>>& grid) {
         int dx[8]={0,1,1,-1,-1,-1,0,1};
         int dy[8]={1,1,0,1,0,-1,-1,-1};
         int n=grid.size();
         int m=grid[0].size();
         int countIsland=0;
         queue<pair<int,int>>q;
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 
                 if(grid[i][j]=='w'){
                     continue;
                 }
                 if(grid[i][j]=='L'){
                     countIsland++;
                     q.push({i,j});
                     grid[i][j]='w';
                 }
                 while(!q.empty()){
                     auto front=q.front();
                     q.pop();
                     for(int k=0;k<8;k++){
                         int nx=front.first+dx[k];
                         int ny=front.second+dy[k];
                         if((nx>=0&&nx<n)&&(ny>=0&&ny<m)&&grid[nx][ny]=='L'){
                             grid[nx][ny]='w';
                             q.push({nx,ny});
                         }
                     }
                 }
             }
         }
         return countIsland;
          
      }
  };