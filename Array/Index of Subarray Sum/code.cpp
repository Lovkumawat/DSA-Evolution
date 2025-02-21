vector<int> subarraySum(vector<int> &arr, int target) {
    // code here
    int left=0;
    for(int i=0;i<arr.size();i++){
        target-=arr[i];
        while(target<0){
            target+=arr[left];
            left=left+1;
            
        }
        if(target==0){
            return {left+1,i+1};
        }
    }
    return {-1};
}