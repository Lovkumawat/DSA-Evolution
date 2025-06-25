 int posOfRightMostDiffBit(int m, int n) {
        
        string s1="";
        string s2="";
        while(m!=0){
            int digit=m%2;
            m=m/2;
            s1.push_back(digit+'0');
        }
        
        while(n!=0){
            int digit=n%2;
            n=n/2;
            s2.push_back(digit+'0');
        }

        int ans=0;
        int i=0;
        int j=0;
        while(i<s1.size()||j<s2.size()){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }else {
                ans=i+1;
                return i+1;
            }
        }
        
      
            return -1;
        
        
        
       
        
        
        
    }