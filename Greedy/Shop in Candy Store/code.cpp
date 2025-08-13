   vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        sort(prices.begin(),prices.end());
        int i=0;
        int j=prices.size()-1;
        int mini=0;
        while(i<=j){
            mini+=prices[i];
            j=j-k;
            i++;
        }
        int maxi=0;
        i=0;
         j=prices.size()-1;
         reverse(prices.begin(),prices.end());
         while(i<=j){
             maxi+=prices[i];
             j=j-k;
             i++;
         }
         return {mini,maxi};
        
    }