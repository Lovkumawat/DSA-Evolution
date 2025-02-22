void sort012(vector<int>& arr) {
    int zero=0;
    int i=0;
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
}