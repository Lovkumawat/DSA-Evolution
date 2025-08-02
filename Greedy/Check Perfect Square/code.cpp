class Solution {
  public:
    int checkPerfectSquare(int N) {
        // code here
        if(N==1||N==2||N==3){
            return 1;
        }
       
        
        int i=1;
        while(i<=N/2){
            int sum=0;
            for(int j=1;j<=i;j++){
                sum+=i;
            }
            if(sum==N){
             
                return 1;
            }
            i++;
            
        }
        return 0;
    }
};