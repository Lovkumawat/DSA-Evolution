    bool pythagoreanTriplet(vector<int>& arr) {
       unordered_set<int>sq;
       for(int i=0;i<arr.size();i++){
           sq.insert(arr[i]*arr[i]);
       }
       
       for(int i=0;i<arr.size();i++){
           int a=arr[i];
           for(int j=i+1;j<arr.size();j++){
               int b=arr[j];
               if(sq.count(a*a+b*b)){
                   return true;
               }
           }
       }
       return false;
        
    }