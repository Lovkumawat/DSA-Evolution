class Solution {
  public:
  static bool cmp(pair<int,int>a,pair<int,int>b){
      if(a.first==b.first){
        return a.second<b.second;
      }
      return a.first<b.first;
  }
  
    vector<int> farMin(vector<int>& arr) {
        // code here
        vector<pair<int,int>>v;
        
        for(int i=0;i<arr.size();i++){
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end(),cmp);
        
        
          unordered_map<int,int>ans;
          
          ans[v[0].second]=-1;
          
          int maxi=v[0].second;
          for(int i=1;i<v.size();i++){
              if(maxi>v[i].second){
                  ans[v[i].second]=maxi;
              }else{
                    ans[v[i].second]=-1;
                  maxi=v[i].second;
              }
          }
          
          vector<int>result;
          for(int i=0;i<arr.size();i++){
              result.push_back(ans[i]);
          }
          return result;
    }
};