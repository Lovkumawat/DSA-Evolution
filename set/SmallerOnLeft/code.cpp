vector<int> Smallestonleft(int arr[], int n) {
    set<int>s;
    vector<int>ans;
    s.insert(-1);
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
     set<int>::iterator it=s.lower_bound(arr[i]);
        --it;
        ans.push_back(*it);
        
    }
    return ans;
   
      
  }