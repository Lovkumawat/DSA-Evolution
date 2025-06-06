int signum(int a, int b) {
    if (a == b) {
        return 0;
    } else if (a > b) {
        return 1;
    } else {
        return -1;
    }
}

void callMedian(int element, priority_queue<int> &maxi, priority_queue<int, vector<int>, greater<int>> &mini, double &median) {
    switch (signum(maxi.size(), mini.size())) {
        case 0:
            if (element > median) {
                mini.push(element);
                median = mini.top();
            } else {
                maxi.push(element);
                median = maxi.top();
            }
            break;

        case 1:
            if (element > median) {
                mini.push(element);
                median = (mini.top() + maxi.top()) / 2.0;
            } else {
                mini.push(maxi.top());
                maxi.pop();
                maxi.push(element);
                median = (mini.top() + maxi.top()) / 2.0;
            }
            break;

        case -1:
            if (element > median) {
                maxi.push(mini.top());
                mini.pop();
                mini.push(element);
                median = (mini.top() + maxi.top()) / 2.0;
            } else {
                maxi.push(element);
                median = (mini.top() + maxi.top()) / 2.0;
            }
            break;
    }
}

vector<double> getMedian(vector<int> &arr) {
    vector<double> ans;
    int n = arr.size();
    
    priority_queue<int> maxHeap;  // Max-Heap for left part
    priority_queue<int, vector<int>, greater<int>> minHeap;  // Min-Heap for right part

    double median = -1;

    for (int i = 0; i < n; i++) {
        callMedian(arr[i], maxHeap, minHeap, median);
        ans.push_back(median);
    }

    return ans;
}