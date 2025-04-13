long long max_Books(int arr[], int n, int k) {
        
    int index=-1;
 long long maxi = LLONG_MIN;
    long long sum=0;
    int i=0;
    while(i<n){
        if(arr[i]<=k){
            if(index==-1||index+1==i){
                index=i;
                sum+=arr[i];
                maxi=max(maxi,sum);
            }
          
        }else{
            index=-1;
            sum=0;
        }
          i++;
    }
    if(maxi!=LLONG_MIN){
        return maxi;
    }
    return 0;
}