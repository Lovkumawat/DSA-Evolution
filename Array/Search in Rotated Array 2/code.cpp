    bool search(vector<int>& arr, int key) {
        // Code here
        int n=arr.size();
        int start=0;
        int end=n-1;
        int mid=end-(end-start)/2;
        while(start<=end){
            if(arr[mid]==key){
                return true;
            }
            if(arr[start]==arr[mid]&&arr[mid]==arr[end]){
                start++;
                end--;
            }else if(arr[start]<=arr[mid]){
                if(arr[start]<=key&&key<=arr[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else{
                if(arr[mid]<=key&&key<=arr[end]){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
            mid=end-(end-start)/2;
        }
        return false;
        
    }
};