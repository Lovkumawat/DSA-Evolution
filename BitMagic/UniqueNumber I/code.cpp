vector<int> singleNum(vector<int>& arr) {
    int num=0;
    for(int i=0;i<arr.size();i++){
        num=num^arr[i];
    }
    int number=num&-num;
    int x=0;
    int y=0;
    for(auto it:arr){
        if(it&number){
            x=x^it;
        }else{
            y=y^it;
        }
    }
    vector<int>ans;
    if(x>y){
        ans.push_back(y);
        ans.push_back(x);
    }else{
        
        ans.push_back(x);
        ans.push_back(y);
    }
    
    return ans;
    
    }