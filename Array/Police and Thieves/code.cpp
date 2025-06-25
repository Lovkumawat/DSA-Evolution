class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        int N=arr.size();
        int police=0;
        int thief=0;
        int count=0;
        while(police<N&&arr[police]!='P'){
            police++;
        }
        while(thief<N&&arr[thief]!='T'){
            thief++;
        }
        while(police<N&&thief<N){
            if(abs(thief-police)<=k){
                thief++;
                police++;
                count++;
            }else if(thief<N&&thief<police){
                thief++;
            }else if(police<N&&police<thief){
                police++;
            }
             while(police<N&&arr[police]!='P'){
               police++;
               }
           while(thief<N&&arr[thief]!='T'){
            thief++;
             }
            
        }
        return count;
        
    }
};