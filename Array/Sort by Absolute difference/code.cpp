class Solution {
  public:
  static bool cmp(pair<pair<int,int>,int>a,pair<pair<int,int>,int>b){
        if(a.first.first==b.first.first){
            return a.second<b.second;
        }
        return a.first.first<b.first.first;
    }
    
  
    void rearrange(vector<int> &arr, int x) {
        // code here
        vector<pair<pair<int,int>,int>>v;
        
        for(int i=0;i<arr.size();i++){
        v.push_back({{abs(arr[i]-x),arr[i]},i});
        }
        
        sort(v.begin(),v.end(),cmp);
        
        arr.clear();
        
        for(auto i:v){
            arr.push_back(i.first.second);
            
        }
        return;
       
    }
};