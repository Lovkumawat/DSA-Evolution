class Solution {
    public:
    void solve(int k,int target,vector<int>v,vector<vector<int>>&ans,int index,int count){
    
        if(count==k&&target==0){
            ans.push_back(v);
            return;
        }
    
        for(int i=index;i<=9;i++){
            // if(target<i){
            //     continue;
            // }
    
            if(target>=i&&count<k){
                v.push_back(i);
                
                solve(k,target-i,v,ans,i+1,count+1);
                
                v.pop_back();
            }
        }
    
        return;
    }
        vector<vector<int>> combinationSum3(int k, int n) {
            vector<int>v;
            
            vector<vector<int>>ans;
            solve(k,n,v,ans,1,0);
    
    
            return ans;
        }
    };