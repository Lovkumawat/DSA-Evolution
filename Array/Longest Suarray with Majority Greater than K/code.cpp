class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
       int prefixsum=0;
       int maxlen=0;
       unordered_map<int,int>mp;
       mp[0]=-1;
       
       for(int i=0;i<arr.size();i++){
           
           if(arr[i]>k){
               prefixsum++;
           }else{
               prefixsum--;
           }
           
           if(prefixsum>0){
               maxlen=i+1;
           }
           
           if(mp.find(prefixsum-1)!=mp.end()){
               maxlen=max(maxlen,i-mp[prefixsum-1]);
               
           }
           
           if(mp.find(prefixsum)==mp.end()){
               mp[prefixsum]=i;
           }
           
       }
       return maxlen;
       
        
    }
};