class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        // Your code goes here;
        vector<int>ans;
        int maxi=max(*max_element(a.begin(),a.end()),*max_element(b.begin(),b.end()));
        vector<int>res(maxi+1,0);
        for(int i=0;i<n;i++){
            res[b[i]]++;
        }
        for(int i=1;i<=maxi;i++){
            res[i]=res[i]+res[i-1];
        }
        for(int i=0;i<query.size();i++){
            ans.push_back(res[a[query[i]]]);
        }
        return ans;
    }
};