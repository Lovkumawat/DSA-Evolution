class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        for(int i=1;i<=arr.size();i++){
            ans.push_back(mp[i]);
        }
        return ans;
    }
};
