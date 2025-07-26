    vector<string> winner(string arr[], int n) {
        // Your code here
        
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        string ans="";
        int maxi=INT_MIN;
        for(auto i:mp){
            if(maxi<i.second){
                ans=i.first;
                maxi=i.second;
            }
        }
        
        return{ans,to_string(maxi)};
        
    }
};