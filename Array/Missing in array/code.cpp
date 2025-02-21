int missingNumber(vector<int>& arr) {
    int n=arr.size();
    n=n+1;
    int sumarray=0;
    for(int i=1;i<=n;i++){
        sumarray+=i;
    }
    for(int i=0;i<arr.size();i++){
        sumarray-=arr[i];
    }
    return sumarray;
    
     }