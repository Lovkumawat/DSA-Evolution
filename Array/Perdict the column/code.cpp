  int columnWithMaxZeros(vector<vector<int>> arr, int N) {
        int index=-1;
        int maxcount=0;
        for(int j=0;j<arr.size();j++){
            int count=0;
            
            for(int i=0;i<arr.size();i++){
                if(arr[i][j]==0){
                    count++;
                }
            }
            if(count>maxcount){
                maxcount=count;
                index=j;
            }
        }
       
        return index;
    }