class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        
        map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        
        for(auto x:mp){
            int num=x.first;
            int count=x.second;
            
            if(count>0){
                for(int i=0;i<k;i++){
                    if(mp[num+i]<count){
                        return false;
                    }
                    mp[num+i]-=count;
                }
            }
        }
        
        return true;
    }
   
};