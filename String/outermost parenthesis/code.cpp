  string removeOuter(string& s) {
        // code here
        string ans="";
        int count=0;
        int i=0;
        int n=s.length();
        while(i<n){
            if(s[i]=='('){
                if(count>0){
                    ans+=s[i];
                }
                count++;
            }else if(s[i]==')'){
                count--;
                if(count>0){
                    ans+=s[i];
                }
                
            }
            i++;
        }
        
        return ans;
        
    }