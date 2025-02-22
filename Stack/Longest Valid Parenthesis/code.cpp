int maxLength(string& s) {
    int maxleft=0,op=0,cl=0,maxright=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            op++;
        }else{
            cl++;
        }
        if(op<cl){
            op=0;
            cl=0;
        }
        if(op==cl){
            maxleft=max(maxleft,op*2);
        }
        
    }
    op=0;
    cl=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='('){
            op++;
            
        }else{
            cl++;
        }
        if(op>cl){
            op=0;
            cl=0;
        }
        if(op==cl){
            maxright=max(maxright,cl*2);
        }
    }
    int ans=max(maxleft,maxright);
    return ans;
    
}