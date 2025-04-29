Node* segregate(Node* head) {
    Node*curr=head;
    vector<int>arr;
    while(curr!=NULL){
        arr.push_back(curr->data);
        curr=curr->next;
    }
       int i=0;
      int zero=0;
      int two=arr.size()-1;
      while(i<=two){
          if(arr[i]==0){
              swap(arr[i],arr[zero]);
              zero++;
          }else if(arr[i]==2){
              swap(arr[i],arr[two]);
              two--;
              i--;
          }
          i++;
      }
      
      Node*temp=new Node(0);
      curr=temp;
      for(int i=0;i<arr.size();i++){
          Node*tempn=new Node(arr[i]);
          temp->next=tempn;
          temp=tempn;
      }
      return curr->next;
      
  }