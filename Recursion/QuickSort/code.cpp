    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high){
            return;
        }
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        int pivot=arr[low];
        int count=0;
        for(int i=low+1;i<=high;i++){
            if(arr[i]<=pivot){
                count++;
            }
        }
        int pivotindex=low+count;
        swap(arr[pivotindex],arr[low]);
        int left=low;
        int right=high;
        while(left<pivotindex&&right>pivotindex){
            
             while(arr[left]<=pivot){
            left++;
        } 
          
        // code here
         while(arr[right]>pivot){
            right--;
               }
               
               if(left<pivotindex&&right>pivotindex){
                   swap(arr[left],arr[right]);
                   left++;
                   right--;
               }
              
        }
        return pivotindex;

    }