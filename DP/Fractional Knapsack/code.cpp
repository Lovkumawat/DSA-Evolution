class Solution {
    public:
      static bool cmp(pair<double, int> a, pair<double, int> b) {
          return a.first > b.first;
      }
  
      double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
          double value = 0.0;
          int n = val.size();
          vector<pair<double, int>> ans;  // Use double for per unit value
  
          for (int i = 0; i < n; i++) {
              double perUnitvalue = (1.0 * val[i]) / wt[i];
              ans.push_back({perUnitvalue, wt[i]});
          }
  
          sort(ans.begin(), ans.end(), cmp);
  
          for (int i = 0; i < n && capacity > 0; i++) {
              int takeWeight = min(capacity, ans[i].second);
              value += ans[i].first * takeWeight;
              capacity -= takeWeight;
          }
  
          return value;
      }
  };