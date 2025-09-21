int maxPartitions(string &s) {
    
    string temp="";
    unordered_map<char, pair<int, bool>> m;
    int n=s.length();
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]=mp[s[i]]+1;
        m[s[i]]={mp[s[i]],true};
    }
    int count=0;
    for(int i=0;i<=n;i++){
        if(temp.size()!=0){
            bool flag=true;
            for(int j=0;j<temp.size();j++){
              if(mp[temp[j]] > 0){
                    flag=false;
                    break;
                }
            }
            
            if(flag==true){
                count++;
                 temp="";
            }
           
        }
        
        if(i<n){
        temp+=s[i];
        int c=mp[s[i]];
        c--;
        mp[s[i]]=c;
        m[s[i]]={c,false};
        }
        
    }
    return count;
    
        
    }
    // approach 2
        int maxPartitions(string &s) {
        // code here
        map<char,int>mp;
         map<char,bool>vis;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            
        }
        int index=0;
        int n=s.length();
        int count=0;
        while(index<n){
            mp[s[index]]--;
            vis[s[index]]=true;
            // check is break point//
            if(mp[index]==0){
                bool flag=true;
                for(auto it:vis){
                    if(vis[it.first]==true&&mp[it.first]!=0){
                        flag=false;
                        break;
                    }
                }
             
                if(flag==true){
                    // a breaking point //
                    count++;
                }
                
            }
            
            index++;
        }
        
        return count;
       
        
    }