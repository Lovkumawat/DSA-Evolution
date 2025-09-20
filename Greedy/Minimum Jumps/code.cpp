class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
int n = arr.size();
if(arr[0] == 0) {
    return -1;
}

int i = 0;
int count = 0;

while(i < n-1) {
    int k = arr[i];
    if(k == 0) return -1;
    
    count++;
    int index = i + 1;
    int maxi = INT_MIN;
        if(i + k >= n - 1) {
        break;
    }
    // Key change: Look for the position that can reach furthest
    for(int j = i + 1; j <= min(k + i, n - 1); j++) {
        
        if(j + arr[j] > maxi) {  // This finds furthest reachable position
            maxi = j + arr[j];
            index = j;
        }
    }
    i = index;
}
return count;
}
};