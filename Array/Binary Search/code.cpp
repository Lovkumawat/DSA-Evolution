int binarysearch(vector<int> &arr, int k) {
    // code here
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int mini=INT_MAX;
    while(start<=end){
        if(arr[mid]==k){
            mini=min(mini,mid);
            end=mid-1;
        }else if(arr[mid]>k){
            end=mid-1;
        }else{
            start=mid+1;
        }
        
        mid=start+(end-start)/2;
    }
    if(mini!=INT_MAX){
        return mini;
    }else{
        return -1;
    }
    
}