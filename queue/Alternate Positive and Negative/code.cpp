    void rearrange(vector<int> &arr) {
        // code here
        queue<int>pos;
        queue<int>neg;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                pos.push(arr[i]);
            }else{
                neg.push(arr[i]);
            }
        }
        arr.clear();
        
        while(!pos.empty()&&!neg.empty()){
        
             arr.push_back(pos.front());
             pos.pop();
              arr.push_back(neg.front());
              neg.pop();
        }
       
            while(!pos.empty()){
             arr.push_back(pos.front());
             pos.pop();
            }
            
            while(!neg.empty()){
            arr.push_back(neg.front());
              neg.pop();
            }
        
        return;
    }
};