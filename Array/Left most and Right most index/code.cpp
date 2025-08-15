class Solution {
  public:
  long long solvemin(vector<long long>arr,long long x){
      long long start=0;
      long long end=arr.size()-1;
      long long mid=start+(end-start)/2;
      
      long long mini=INT_MAX;
      while(start<=end){
          if(arr[mid]==x){
              end=mid-1;
              mini=min(mini,mid);
          }
          if(arr[mid]<x){
              start=mid+1;
          }else if(arr[mid]>x){
              end=mid-1;
          }
          mid=start+(end-start)/2;
      }
      return mini;
  }
  long long solvemax(vector<long long >arr,long long x){
      long long start=0;
      long long end=arr.size()-1;
      long long mid=start+(end-start)/2;
      
      long long maxi=INT_MIN;
      while(start<=end){
          if(arr[mid]==x){
              start=mid+1;
          
              maxi=max(maxi,mid);
          }
          
          if(arr[mid]<x){
              start=mid+1;
          }else if(arr[mid]>x){
              end=mid-1;
          }
          mid=start+(end-start)/2;
         
      }
      return maxi;
  }
  
    pair<long, long> indexes(vector<long long> v, long long x) {
        // code here
        
        long long prev=solvemin(v,x);
        long long curr=solvemax(v,x);
        if(prev==INT_MAX&&curr==INT_MIN){
            return {-1,-1};
        }else
        if(prev!=INT_MAX&&curr==INT_MIN){
            return {prev,prev};
        } else
        if(prev==INT_MAX&&curr!=INT_MIN){
            return {curr,curr};
        }else{
            return {prev,curr};
        }
        
        
    }
};