bool isBalanced(string& s) {
    stack<char> st;
  
    for(int i=0;i<s.length();i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('){
            st.push(s[i]);
        }else if((s[i]=='}'||s[i]==']'||s[i]==')')&&st.size()!=0){
            char ch=st.top();
            if(ch=='{'&&s[i]=='}'){
                st.pop();
            }else if(ch=='['&&s[i]==']'){
                st.pop();
            }else if(ch=='('&&s[i]==')'){
                st.pop();
            }else{
                return false;
            }
            
            
            
        }else{
            return false;
        }
        
    }
    if(st.size()==0){
        return true;
    }else{
         return false;
        
    }
   
   }