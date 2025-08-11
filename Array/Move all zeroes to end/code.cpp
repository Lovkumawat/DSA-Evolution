    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int start=0;
        int zero=0;
        int end=arr.size()-1;
        while(start<=end){
            if(arr[start]!=0){
                swap(arr[start],arr[zero]);
                start++;
                zero++;
            }else if(arr[start]==0){
                start++;
            }
            
        }
        return;
    }
};