vector<int> nextLargerElement(vector<int>& arr) {
    stack<int>st;
    int n=arr.size();
    vector<int>ans;
    ans.push_back(-1);
    st.push(-1);
    for(int i=n-2;i>=0;i--){
        if(arr[i+1]>arr[i]){
            ans.push_back(arr[i+1]);
            st.push(arr[i+1]);
        }else{
            while(!st.empty()){
                int top=st.top();
                if(top>arr[i]||top==-1){
                    st.push(top);
                    ans.push_back(top);
                    break;
                }else{
                    st.pop();
                }
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}