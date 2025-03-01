string decodedString(string &s) {
    stack<string>str;
    stack<int>st;
    string temp="";
    int n=s.size();
    int num=0;
    if(n==0){
        return s;
    }
    for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            num=num*10+(s[i]-'0');
        }else if(s[i]=='['){
            st.push(num);
            num=0;
            str.push(temp);
            temp="";
        }else if(s[i]==']'){
            int k=st.top();
            st.pop();
            string temp2=str.top();
            for(int j=1;j<=k;j++){
                temp2=temp2+temp;
            }
            str.pop();
            temp=temp2;
            
        }else{
            temp+=s[i];
        }
    }
    return temp;
}