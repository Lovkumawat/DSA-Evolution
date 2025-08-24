class Solution {
  public:
  bool knows(vector<vector<int>>mat,int a,int b){
      if(mat[a][b]==1){
          return true;
      }else{
          return false;
      }
  }
  
    int celebrity(vector<vector<int>>& mat) {
    //   Brute force 
    //     for(int i=0;i<mat.size();i++){
    //         bool flag=true;
    //         for(int j=0;j<mat[0].size();j++){
    //             if(!(mat[i][j]==0&&mat[j][i]==1)&&i!=j){
    //                 flag=false;
    //                 break;
    //             }
    //         }
    //         if(flag==true){
    //             return i;
    //         }
            
    //     }
    //     return -1;
    // }
    // Using Stack
    int n=mat.size();
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(i);
    }
    while(st.size()>1){
        int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();
        if(knows(mat,a,b)){
            st.push(b);
        }else{
            st.push(a);
        }
        
    }
    
    int candidate=st.top();
    // verify
    // checkrow
    int zerocount=0;
    for(int i=0;i<n;i++){
        if(mat[candidate][i]==0){
            zerocount++;
        }
    }
    int onecount=0;
    for(int i=0;i<n;i++){
        if(mat[i][candidate]==1){
            onecount++;
        }
    }
    bool checkrow=false;
    if(zerocount==n-1){
        checkrow=true;
    }
    
    bool checkcol=false;
    if(onecount==n){
        checkcol=true;
    }
    
    if(checkrow==true&&checkcol==true){
        return candidate;
    }else{
        return -1;
    }
    }
    
    
};