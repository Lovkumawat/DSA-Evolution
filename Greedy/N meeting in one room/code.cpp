class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }
    
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>>ans;
        
        for(int i=0;i<start.size();i++){
            ans.push_back(make_pair(start[i],end[i]));
        }
        sort(ans.begin(),ans.end(),cmp);
        
        int last=ans[0].second;
        int count=1;
        for(int i=1;i<ans.size();i++){
            if(last<ans[i].first){
                count++;
                last=ans[i].second;
            }
            
            
        }
        
        return count;
        
    }
};