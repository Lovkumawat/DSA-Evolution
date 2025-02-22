int minJumps(vector<int>& arr) {
    if (arr[0] == 0) {
        return -1; 
    }
    
    int size=arr.size()-1;
    int jump=0;
    int index=0;
    int i;
    while(index<arr.size()){
        int step=arr[index];
        if(step==0){
            return -1;
        }
        
        if((step+index)>=size){
            jump++;
            break;
        }
        
        int maxreach=INT_MIN;
        bool found=false;
        for(int j=index+1;j<=index+step&&j<arr.size();j++){
            if(arr[j]!=0&&j+arr[j]>maxreach){
                maxreach=j+arr[j];
                found=true;
                i=j;
            }
            
        }
        if(!found){
            return -1;
        }
        
        index=i;
        jump++;
    }
    return jump;
    
    }