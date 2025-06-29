
class Solution {
  public:
    // Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n) {
        
        // count diagnonal
        int i=0;
        int sumd=0;
        while(i<n){
            sumd+=matrix[i][i];
            i++;
        }
        
         i=0;
        int j;
        int sum=0;
        while(i<n){
            j=i+1;
            while(j<n){
                sum+=matrix[i][j];
                j++;
            }
            i++;
        }
        int uppersum=sumd+sum;
        i=0;
        sum=0;
        while(i<n){
            j=0;
            while(j<i){
                sum+=matrix[i][j];
                j++;
            }
            i++;
        }
        int lowersum=sumd+sum;
        return {uppersum,lowersum};
        
        
        
        
        
    }
};