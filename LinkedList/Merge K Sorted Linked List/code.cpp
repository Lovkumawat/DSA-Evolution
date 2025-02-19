class Solution {
    public:
    struct Compare{
        bool operator()(Node*a,Node*b){
            return a->data>b->data;
        }
    };
    
      Node* mergeKLists(vector<Node*>& arr) {
  
          priority_queue<Node*,vector<Node*>,Compare> minheap;
          for(auto list:arr){
              minheap.push(list);
          }
          Node*dummy=new Node(0);
          Node*ans=dummy;
          
          while(!minheap.empty()){
              Node* top=minheap.top();
              minheap.pop();
              dummy->next=top;
              dummy=dummy->next;
              if(top->next!=NULL){
                  minheap.push(top->next);
                  
              }
              
          }
          ans=ans->next;
          return ans;
          
      }
  };