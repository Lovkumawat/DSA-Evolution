class Solution {
    public:
      int evaluate(vector<string>& arr) {
          
          int n=arr.size();
         
          stack<int>st;
          for(int i=0;i<n;i++){
              if(arr[i]=="+"){
                  int b=st.top();
                  st.pop();
                  int a=st.top();
                  st.pop();
                  int ans=a+b;
                    st.push(ans);
              }else if(arr[i]=="-"){
                   int b=st.top();
                  st.pop();
                  int a=st.top();
                  st.pop();
                  int ans=a-b;
                    st.push(ans);
              }else if(arr[i]=="*"){
                  int b=st.top();
                  st.pop();
                  int a=st.top();
                  st.pop();
                  int ans=a*b;
                    st.push(ans);
              }else if(arr[i]=="/"){
                   int b=st.top();
                  st.pop();
                  int a=st.top();
                  st.pop();
                  int ans=a/b;
                   st.push(ans);
              }else{
                  int num=stoi(arr[i]);
                  st.push(num);
              }
          }
          return st.top();
          
       
      }
  };