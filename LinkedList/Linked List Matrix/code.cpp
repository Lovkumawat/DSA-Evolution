/*structure of the node of the linked list is as

struct Node
{
    int data;
    Node* right, *down;

    Node(int x){
        data = x;
        right = NULL;
        down = NULL;
    }
};
*/

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n=mat.size();
        int m=mat[0].size();
        Node*nodematrix[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                nodematrix[i][j]=new Node(mat[i][j]);
            }
        }
        
        Node*ans=nodematrix[0][0];
        int j,i;
        for( i=0;i<n;i++){
            for( j=0;j<m;j++){
                if(j+1<m){
                    nodematrix[i][j]->right=nodematrix[i][j+1];
            }
              if(i+1<n){
         nodematrix[i][j]->down=nodematrix[i+1][j];
        }
        
        }
        
      
        
        }
        
     return ans;   
        
    }
};