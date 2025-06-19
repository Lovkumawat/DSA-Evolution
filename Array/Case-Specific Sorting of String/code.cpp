class Solution {
  public:
    string caseSort(string& s) {
        
vector<char> u, l;
    
    // Collect characters
    for(char c : s) {
        if(isupper(c)) {
            u.push_back(c);
        } else if(islower(c)) {
            l.push_back(c);
        }
    }
    
    // Sort both vectors
    sort(u.begin(), u.end());
    sort(l.begin(), l.end());
    
    // Use string with reserved capacity
    string ans;
    ans.reserve(s.length()); // Pre-allocate memory
    
    int i = 0, j = 0;
    for(char c : s) {
        if(isupper(c)) {
            ans += u[i++]; // Use += instead of = ans +
        } else if(islower(c)) {
            ans += l[j++];
        }
    }
    
    return ans;

        
        
    }
};