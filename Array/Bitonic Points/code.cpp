    int findMaximum(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n==1){
            return arr[0];
            
        }
        if(n==2){
            return max(arr[0],arr[1]);
        }

        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        
        while(start<=end){

            
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
                return arr[mid];
            }
            
            if(arr[mid]<arr[mid+1]&&arr[mid]>arr[mid-1]&&arr[start]<=arr[mid]){
                start=mid+1;
            }else if
            (arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1]&&arr[end]<arr[mid]){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }