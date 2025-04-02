// GREEDY APPROACH
vector<int> minPartition(int N)
{
    vector<int>ans;
    
    int *arr = new int[10];
arr[0] = 2000;
arr[1] = 500;
arr[2] = 200;
arr[3] = 100;
arr[4] = 50;
arr[5] = 20;
arr[6] = 10;
arr[7] = 5;
arr[8] = 2;
arr[9] = 1;

    
    int i=0;
    while(i<10&&N!=0){
        if(arr[i]>N){
            i++;
        }else{
            ans.push_back(arr[i]);
            N=N-arr[i];
        }
        
    }
    return ans;
    
    
}
// DYNAMIC APPROACH
