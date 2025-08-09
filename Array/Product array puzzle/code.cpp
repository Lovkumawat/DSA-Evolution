   vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int product=1;
        bool flag=false;
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
            product=product*arr[i];
            }else{
                flag=true;
                count++;
            }
            
        }
        
        vector<int>ans;
        if(count>1){
            for(int i=0;i<arr.size();i++){
                ans.push_back(0);
            }
        }else{
            
            for(int i=0;i<arr.size();i++){
            if(flag==true){
                if(arr[i]==0){
                    ans.push_back(product);
                }else{
                    ans.push_back(0);
                }
            }else{
                
                int digit=product/arr[i];
                ans.push_back(digit);
            }
          
        } 
        
        }
       
        
        return ans;
    }