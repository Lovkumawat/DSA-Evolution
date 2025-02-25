#include <bits/stdc++.h>
using namespace std;

// Function to find the next smaller element for each element in the array
vector<int> findNextSmallerElement(const vector<int>& arr) {
    int n = arr.size();

    // Stores the next smaller elements, initialized with -1
    vector<int> nextSmaller(n, -1);

    // Monotonic stack to keep track of indices
    stack<int> st;
    st.push(-1);
    // Iterate through the array
    for (int i = n-1; i >= 0; i--) {
        // Maintain a decreasing order in the stack
        int curr=arr[i];
        while (curr<=st.top()) {
            st.pop(); // Remove processed element
        }
        nextSmaller[i]=st.top();
        st.push(curr);
    }

    return nextSmaller;
}

// Driver function
int main() {
    // Input array
    vector<int> arr = {4, 8, 2, 1, 6, 10, 5};

    // Function call to find next smaller elements
    vector<int> result = findNextSmallerElement(arr);

    // Print the original array
    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Print the next smaller elements
    cout << "Next Smaller Elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}