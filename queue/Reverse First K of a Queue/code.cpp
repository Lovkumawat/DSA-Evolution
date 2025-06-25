class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
       if(q.size()<k){
           return q;
       }
       stack<int>st;
        int i=0;
        while(i<k){
            int temp=q.front();
            q.pop();
            st.push(temp);
            i++;
        }
        
        while(!st.empty()){
            int temp=st.top();
            st.pop();
            q.push(temp);
        }
        i=k;
        while(i<q.size()){
            int temp=q.front();
            q.pop();
            q.push(temp);
            i++;
        }
        return q;
    }
};