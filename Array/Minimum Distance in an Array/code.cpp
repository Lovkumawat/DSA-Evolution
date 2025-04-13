int minDist(vector<int>& arr, int x, int y) {
    int left=-1;
    int right=-1;
    int mini=INT_MAX;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            
            left=i;
        }else if(arr[i]==y){
            right=i;
        }
        if(left!=-1&&right!=-1){
            mini=min(mini,abs(left-right));
        }
    }
    if(mini!=INT_MAX){
        return mini;
    }
    return -1;
}