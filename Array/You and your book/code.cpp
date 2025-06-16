   long long max_Books(int arr[], int n, int k) {
        
    int i=0;
    long sum=0;
    long ans=0;
    while(i<n){
     
        int j=i;
        while(j+1<n&&arr[j]<=k&&arr[j+1]<=k){
        sum=sum+arr[j];
        ans=max(ans,sum); 
            j++;
            
        }
        
          i=j;
         if(arr[i]<=k){
        sum=sum+arr[i];
        ans=max(ans,sum); 
        }
        sum=0;
        i++;
        
        
        
    }
    return ans;
        
        
    }