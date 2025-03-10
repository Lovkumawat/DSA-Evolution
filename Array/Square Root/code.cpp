int floorSqrt(int n) {
    // Your code goes here
    int start=0;

    int end=n;
    int mid=start+(end-start)/2;
    int maxi=INT_MIN;
    while(start<=end){
   
        if(mid*mid<=n){
            maxi=max(maxi,mid);
                start=mid+1;
        }else if(mid*mid>n){
            end=mid-1;
        }else if(mid*mid<n) {
            start=mid+1;
        }
         mid=start+(end-start)/2;
    }
   return maxi;
}